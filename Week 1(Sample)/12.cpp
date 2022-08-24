/*
Write a  C++ program to find numbers between 100 and 400 (both included) where each digit of a number is an even number. The numbers obtained should be printed in a comma-separated sequence.
*/
#include <iostream>
using namespace std;

int main()
{
    int count,x,temp;
    for(int i=100;i<=400;i++)
    {
        count=0;
        temp=i;
        while(temp>0)
        {
            x=temp%10;
            if(x%2==0)
            {
                count++;
            }
            temp=temp/10;
        }
        
        if(count==3)
        {
            cout<<i<<", ";
        }
    }

    return 0;
}