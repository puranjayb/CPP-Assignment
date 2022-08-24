/*
Write a C++ program which takes two digits m (row) and n (column) as input and generates a two-dimensional array. The element value in the i-th row and j-th column of the array should be i*j. Note :
i = 0,1.., m-1
j = 0,1, n-1.
Test Data : Rows = 3, Columns = 4
Expected Result : [[0, 0, 0, 0], [0, 1, 2, 3], [0, 2, 4, 6]]
*/

#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter how many rows and columns you want"<<endl;
    cin>>row>>col;
    int array[row][col];

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>array[i][j];
        }
    }

    cout<<"[";
    for(int i=0;i<row;i++)
    {
        cout<<"[";
        for(int j=0;j<col;j++)
        {
            cout<<array[i][j]<<", ";
        }
        cout<<"], ";
    }
    cout<<"]";

    return 0;
}