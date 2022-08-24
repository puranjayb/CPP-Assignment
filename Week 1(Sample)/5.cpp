/*
Write function that take a string then reverse it.
Sample String: "1234abcd" Expected Output: "dcba4321
*/

#include <iostream>
#include <string.h>
using namespace std;

void rev(char string[]);

int main()
{
    char string[]={};
    cout<<"Enter a string: ";
    gets(string);
    rev(string);
}

void rev(char string[])
{
    for(int i=strlen(string);i>=0;i--)
    {
        cout<<string[i];
    }
}