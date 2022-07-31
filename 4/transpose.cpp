#include <iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    int array[row][column];

    cout<<"Enter array elements\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>array[i][j];
        }
    }

    cout<<"\nThe array is\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"\nTranspose of the array is\n";for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<array[j][i]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}