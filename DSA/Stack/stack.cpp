#include <iostream>
using namespace std;

const int slot=10;
int stack[slot];
int top=-1;

void push();
void pop();
void show();

int main(){
    int choice;
    do{
        cout<<endl<<"--------------------"<<endl;
        cout<<"1- Push"<<endl;
        cout<<"2- Pop"<<endl;
        cout<<"3- Show"<<endl;
        cout<<"4- Exit"<<endl;

        cout<<"Enter your choice:";
        cin>>choice;
        cout<<endl<<"--------------------"<<endl;

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            default:
                break;
        }
    }
    while(choice<4);
    return 0;
}

void push(){
    top++;

    if(top>slot){
        cout<<"Overflow Condition"<<endl;
    }

    else{
        cout<<"Insert element at Stack["<<top<<"]=";
        cin>>stack[top];
    }
}

void pop(){
    if(top<-1){
        cout<<"Underflow Condition"<<endl;
    }

    else{
        cout<<"Deleting element at Stack["<<top<<"]";
        stack[top]=0;
        top--;
    }
}

void show(){
    for(int i=0;i<=top;i++){
        cout<<"Stack["<<i<<"]="<<stack[i]<<endl;
    }
}