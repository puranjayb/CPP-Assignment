#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==1 || i==2 || i==5 || i==6)
        {
            cout<<"*********"<<endl;
            continue;
        }
        
        if(i==3||i==4)
        {
            cout<<"***   ***"<<endl;
            continue;
        }
        if(i>=7 && i<=10)
        {
            cout<<"***"<<endl;
            continue;
        }
    }
}