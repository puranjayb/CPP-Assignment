#include <iostream>
using namespace std;

int fact =1;

int factorial(int x)
{
    if(x>0)
    {
        fact=fact*x;
        return factorial(x-1);
    }
    cout<<"Factorial is: "<<fact;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number==0)
    {
        cout<<"Factorial is 1";
    }
    else
    {
        factorial(number);
    }
    return 0;
}
