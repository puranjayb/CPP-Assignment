#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    int arr[r][c];

    cout<<"Enter array elements: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nThe array is: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

    cout<<"Sum of rows are: \n";
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<"\n";
    }
    return 0;
}