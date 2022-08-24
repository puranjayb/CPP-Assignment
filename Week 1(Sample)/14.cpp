/*
Write a C++  program to sum of two given integers. However, if the sum is between 105 to 200 it will return 200.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,sum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    sum=num1+num2;
    if(sum>=105 &&sum<=200)
    {
        sum=200;
    }

    cout<<"Sum is: "<<sum;
    return 0;
}