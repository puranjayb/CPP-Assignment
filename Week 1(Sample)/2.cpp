/*
Write a C++ program to find those numbers which are divisible by 8 and multiple of 5, between 1000 and 2000 (both included)
*/

#include <iostream>
using namespace std;

int main()
{
    int count=0;
    cout<<"Number divisible by 8 and multiple of 5 are"<<endl;
    for(int i=1000;i<=2000;i++)
    {
        if(i%8==0 && i%5==0)
        {
            count++;
            cout<<i<<", ";            
        }
    }
    cout<<endl<<"There are "<<count<<" numbers between 1000 and 2000 that are divisible by 8 and multiple of 5";
    return 0;
}

