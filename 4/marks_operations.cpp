#include <iostream>
using namespace std;

int maxMarks(int marks[]);
int linearSearch(int max,int marks[]);
void bubbleSort(int marks[]);

int main()
{
    int marks[10],max,pos;
    cout<<"Enter marks\n";
    for(int i=0;i<10;i++)
    {
        cin>>marks[i];
    }

    max=maxMarks(marks);
    pos=linearSearch(max,marks)+1;
    bubbleSort(marks);
    return 0;
}

int maxMarks(int marks[])
{
    int x;
    for(int i=0;i<10;i++)
    {
        if(marks[i]>marks[i+1])
        {
            x=marks[i];
        }

        else
        {
            x=marks[i+1];
        }
    }
    return x;
}

int linearSearch(int max,int marks[])
{
    for(int i=0;i<10;i++)
    {
        if(max==marks[i])
        {
            return i;
        }
    }
}

void bubbleSort(int marks[])
{
    int temp;
    for(int p=0;p<9;p++)
    {
        for(int c=0;c<10-p;c++)
        {
            if(marks[c]>marks[c+1])
            {
                temp=marks[c];
                marks[c]=marks[c+1];
                marks[c+1]=temp;
            }
        }
    }
    
    cout<<"Sorted marks list is: ";
    for(int i=0;i<10;i++)
    {
        cout<<marks[i]<<",";
    }
}
