#include <iostream>
using namespace std;

const int n=3;
int stack[n];
int top=-1;

void push();
void pop();
void show();

int main()
{
    int choice;
    do
    {
        cout<<"1 - Push\n";
        cout<<"2 - Pop\n";
        cout<<"3 - Show Data\n";
        cout<<"4 - Exit\n";

        cout<<"\nEnter choice: ";
        cin>>choice;
        cout<<"-------------------------\n";

        switch(choice)
        {
            case(1):
                push();
                break;
            case(2):
                pop();
                break;
            case(3):
                show();
                break;
            default:
                break;
        }
    }
    while(choice<4);

    return 0;    
}

void push()
{
    top++;

    if(top>=n)
    {
        cout<<"Overload Condition\n";
    }
    else
    {
        cout<<"Inserting at stack["<<top<<"]=";
        cin>>stack[top];
        cout<<endl;
    }
}

void pop()
{
    if(top>-1)
    {
        cout<<"Deleting stack["<<top<<"]\n";
        cout<<endl;
        top--;
    }
    else
    {
        cout<<"Underload condition\n";
    }
}

void show()
{
    for(int i=0;i<=top;i++)
    {
        cout<<"stack["<<i<<"]="<<stack[i]<<endl;
    }
    cout<<endl;
}