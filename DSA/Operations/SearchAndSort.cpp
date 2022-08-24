#include <iostream>
using namespace std;

void bubble_sort(int array[],int size);
void binary_search(int array[],int size);

int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int array[size];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    bubble_sort(array,size);
    return 0;
}

void bubble_sort(int array[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    cout<<"Sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<",";
    }
    cout<<endl;

    binary_search(array,size);
}

void binary_search(int array[],int size){
    int beg,mid,end,number;
    beg=0;
    end=size-1;
    mid=(beg+end)/2;
    cout<<"Enter number to search:";
    cin>>number;

    while(array[mid]!=number){
        if(array[mid]>number){
            beg=0;
            end=mid-1;
            mid=(beg+end)/2;
        }

        else if(array[mid]<number){
            beg=mid+1;
            end=size-1;
            mid=(beg+end)/2;
        }

        else if(beg==mid){
            cout<<"Number is not present";
        }
    }

    if(array[mid]==number){
        cout<<"Found number "<<number<<" at location "<<mid+1<<endl;
    }
}