#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=9;j++)
            {
                cout<<"*";
            }
        cout<<"\n";
    }

    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=3;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=3;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<"*";
        }
        cout<<"\n";     
    }

    return 0;
}