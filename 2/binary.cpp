#include <iostream>
using namespace std;

void bubbleSort(int array[],int n);
void binarySearch(int array[],int n);

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int array[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"The array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<", ";
    }

    bubbleSort(array,n);
}

void bubbleSort(int array[], int n)
{
    int temp;
    for(int p=0; p<n-1; p++)
    {
        for(int c=0; c<n-p;c++)
        {
            if(array[c]>array[c+1])
            {
                temp=array[c+1];
                array[c+1]=array[c];
                array[c]=temp;
            }
        }
    }

    cout<<"\nThe sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<", ";
    }

    binarySearch(array,n);
}

void binarySearch(int array[],int n)
{
    int beg,end,mid,number;
    cout<<"\nEnter the number you want to find: ";
    cin>>number;
    beg=0;
    end=n;
    mid=(beg+end)/2;

    while(array[mid]!=number)
    {
        if(array[mid]>number)
        {
            beg=0;
            end=mid-1;
            mid=(beg+end)/2;
        }

        if(array[mid]<number)
        {
            beg=mid+1;
            end=n;
            mid=(beg+end)/2;
        }
    }

    cout<<"Found the number at "<<mid<<" location";
}
