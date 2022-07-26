#include <iostream>
using namespace std;

int main(){
    int a,b,temp=0;

    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"Value of A is: "<<a;
    cout<<"Value of B is: "<<b;

    return 0;
}