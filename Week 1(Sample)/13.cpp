/*
Write a C++ program to convert month name to a number of days.
*/

#include <iostream>
using namespace std;

int main()
{
    string month;
    cout<<"Enter full name of a month: ";
    cin>>month;

    if(month=="janurary" || month=="march" || month=="may" || month=="july" || month=="august" || month=="october" || month=="december")
    {
        cout<<"31 days";
    }
    else if(month=="feburary")
    {
        cout<<"28 or 29 days";
    }
    else
    {
        cout<<"30 days";
    }
    return 0;
}