/*
Write a C++ program that accepts a word from the user and reverse it. ( should not use any functions)
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string[]={};
    cout<<"Enter a string: ";
    gets(string);

    for(int i=strlen(string);i>=0;i--)
    {
        cout<<string[i];
    }
}