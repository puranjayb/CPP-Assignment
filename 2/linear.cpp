#include <iostream>
using namespace std;

int main(){
    int n,number,flag;
    char x;

    cout<<"Enter number of elements: ";
    cin>>n;
    int array[n];

    cout<<"Enter the array elements:\n";
        for(int i=1; i<=n; i++){
            cin>>array[i];
        }
       
    do{ 
        flag=0;
        cout<<"Enter the number to search: ";
        cin>>number;

        for(int i=1; i<=n; i++){
            if(array[i]==number){
                cout<<"Found at "<<i<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Number not found\n";
        }
    cout<<"Do you want to perform linear search again Y/N: ";
    cin>>x;
    }
     

    while(x=='Y'||x=='y');
    return 0;

}