#include <iostream>
using namespace std;

int main()
{
    int number,temp,armstrong,x=0;
    cout<<"Enter a number: ";
    cin>>number;
    armstrong=number;

    while(number>0)
    {
        temp=number%10;
        x=x+(temp*temp*temp);
        number=number/10;
    }

    if(x==armstrong)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not an armstrong number";
    }

    return 0;
}