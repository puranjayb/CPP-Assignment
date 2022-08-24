/*
Write a C++ program that accepts a string and calculate the number of digits and letters. 

Sample Data : SRMIST  2022

Expected Output :
Letters 6
Digits 4
*/


#include <iostream>
#include <string.h>
using namespace std;

void calc(char string[]);
int letter=0,number=0,num,temp;

int main()
{
    char string[]={};
    cout<<"Enter a string: ";
    gets(string);
    calc(string);
}

void calc(char string[])
{
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
            letter++;
        }
        if(string[i]>='A' && string[i]<='Z')
        {
            letter++;
        }
    }
    num=atoi(string);
    while(num>0)
    {
        cout<<"hi";
        temp=num%10;
        num=num/10;
        if(temp>=1 && temp<=9)
        {
        number++;
        }      
    }  
    
    cout<<"Numbers: "<<number<<endl;
    cout<<"Letters: "<<letter<<endl;
}