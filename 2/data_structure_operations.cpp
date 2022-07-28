#include <iostream>
using namespace std;

int main()
{
    int size1,size2;
    cout<<"Enter the size of array 1: ";
    cin>>size1;
    cout<<"Enter the size of array 2: ";
    cin>>size2;
    int array1[size1],array2[size2];

    cout<<"Enter the elements of array 1\n";
    for(int i=0;i<size1;i++)
    {
        cin>>array1[i];
    }
    cout<<"Enter the elements of array 2\n";
    for(int i=0;i<size2;i++)
    {
        cin>>array2[i];
    }




    //Traversing
    cout<<"Array 1 is: ";
    for(int i=0;i<size1;i++)
    {
        cout<<array1[i]<<"; ";
    }
    cout<<"\nArray 2 is: ";
    for(int i=0;i<size2;i++)
    {
        cout<<array2[i]<<"; ";
    }



    //Insertion
    int number1,number2;
    cout<<"\nEnter the number to be inserted in array 1: ";
    cin>>number1;
    cout<<"Enter the number to be inserted in array 2: ";
    cin>>number2;

    size1=size1 + 1;
    array1[size1-1]=number1;
    cout<<"Updated array 1 after insertion is: ";
    for(int i=0;i<size1;i++)
    {
        cout<<array1[i]<<"; ";
    }

    size2=size2 + 1;
    array2[size2-1]=number1;
    cout<<"\nUpdated array 2 after insertion is: ";
    for(int i=0;i<size2;i++)
    {
        cout<<array2[i]<<"; ";
    }



    //Deletion
    for(int i=0;i<size1;i++)
    {
        array1[i]=array1[i+1];
    }

    size1=size1-1;
    cout<<"\nUpdated array 1 after deletion is: ";
    for(int i=0;i<size1;i++)
    {
        cout<<array1[i]<<"; ";
    }


    for(int i=0;i<size2;i++)
    {
        array2[i]=array2[i+1];
    }

    size2=size2-1;
    cout<<"\nUpdated array 2 after deletion is: ";
    for(int i=0;i<size2;i++)
    {
        cout<<array2[i]<<"; ";
    }



    //Merge
    int size3=size1+size2;
    int array3[size3];
    for(int i=0;i<size1;i++)
    {
        array3[i]=array1[i];
    }
    for(int i=0;i<size2;i++)
    {
        array3[i+size1]=array2[i];
    }

    cout<<"\nMerged array is: ";
    for(int i=0;i<size3;i++)
    {
        cout<<array3[i]<<"; ";
    }
    

    return 0;
}