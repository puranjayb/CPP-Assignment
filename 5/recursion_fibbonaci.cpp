#include <iostream>
using namespace std;

int sum,a=0,b=1;

int fib(int x)
{
    if(x>2)
    {
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<' ';
        return fib(x-1);
    }
    else
    {
        return 0;
    }
}

int main()
{   
    int number;
    cout<<"Enter how many numbers you want: ";
    cin>>number;

    cout<<"0 1 ";
    fib(number);
}