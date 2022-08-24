/*
Write a C++ program to construct the following pattern, using a nested loop number.
Expected Output:
999999999
88888888
7777777
666666
55555
4444
333
22
1
*/

#include <iostream>
using namespace std;

int main()
{
    for(int i=9;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}