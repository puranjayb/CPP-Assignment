/*
Write a  C++ program to check the validity of password input by users.
Validation :
    • At least 1 letter between [a-z] and 1 letter between [A-Z].
    • At least 1 number between [0-9].
    • At least 1 character from [$#@].
    • Minimum length 6 characters.
    • Maximum length 16 characters.
Sample output
Input your password srmist@2017
Not a Valid Password
Input your password Srmist@2022
Valid Password
*/

#include <iostream>
using namespace std;

int flag,flag1,flag2,flag3;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            flag=1;
        }

        else if(s[i]>='A' && s[i]<='Z')
        {
            flag1=1;
        }

        else if(s[i]=='$' || s[i]=='@' || s[i]=='#')
        {
            flag2=1;
        }

        else if(s[i]>=0)
        {
            flag3=1;
        }

        else
        {
            continue;
        }  
    }

    if(s.length()>=6 && s.length()<=16)
    {
        if(flag==1 && flag1==1 && flag2==1 && flag3==1)
        {
        cout<<"Valid Password";
        }

        else
        {
        cout<<"Invalid Password";
        }
    }

    else
    {
        cout<<"Invalid Password";
    }

    
    return 0;
}