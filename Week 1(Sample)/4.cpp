/*
Write a function take three numbers from user then output the minimum number.
*/

#include <iostream>
using namespace std;

void min();

int main()
{
    min();
    return 0;
}

void min()
{
    int num1,num2,num3;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;

    if(num3<num2 && num3<num1)
    {
        cout<<num3<<" is the minimum";
    }

    if(num2<num1 && num2<num3)
    {
        cout<<num2<<" is the minimum";
    }

    if(num1<num2 && num1<num3)
    {
        cout<<num1<<" is the smallest";
    }
}