#include <iostream>
using namespace std;

int main()
{
    int number,temp,x=0,i;
    cout<<"Enter a number: ";
    cin>>number;
    i=number;

    while(number>0)
    {
        temp=number%10;
        number=number/10;  
        x=x*10+temp;      
    }

    if(x==i)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }

    return 0;
}