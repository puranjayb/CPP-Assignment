/* 3. Write a C++ program that take a number from user then output the power of this number.
Enter a number: 4 
The power: 1 
*/

#include <iostream>
using namespace std;

int main()
{
    int number,power,temp=1;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter power: ";
    cin>>power;

    cout<<number<<"^"<<power<<"=";
    for(int i=1;i<=power;i++)
    {
        temp=temp*number;
    }
    cout<<temp;
    return 0;
}