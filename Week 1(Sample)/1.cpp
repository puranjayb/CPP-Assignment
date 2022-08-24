/* 1. Write a C++ program that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer vales for the calculation. See the sample below. 
MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus 
Enter your choice: 1
Enter your two numbers: 12 15 Result: 27 
*/

#include <iostream>
using namespace std;

void add(int x,int y);
void sub(int x,int y);
void mult(int x,int y);
void mod(int x,int y);
void divide(int x, int y);

int main()
{
    int choice,num1,num2;
    cout<<endl;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Enter number: ";
    cin>>num2;
    do
    {
        
        cout<<endl<<"__________Menu__________"<<endl;
        cout<<"1 - Addition"<<endl;
        cout<<"2 - Subtract"<<endl;
        cout<<"3 - Multiply"<<endl;
        cout<<"4 - Divide"<<endl;
        cout<<"5 - Modulus"<<endl;
        cout<<"6 - Exit"<<endl;
        cout<<"________________________"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case(1):
                add(num1,num2);
                break;

            case(2):
                sub(num1,num2);
                break;

            case(3):
                mult(num1,num2);
                break;

            case(4):
                divide(num1,num2);
                break;

            case(5):
                mod(num1,num2);
                break;

            default:
                break;
        }
        
    }
    while(choice<6);
    return 0;
}

void add(int x, int y)
{
    int z;
    z=x+y;
    cout<<"Addition of entered numbers is: "<<z<<endl;
}

void sub(int x, int y)
{
    int z;
    z=x-y;
    cout<<"Subtraction of entered numbers is: "<<z<<endl;
}

void mult(int x, int y)
{
    int z;
    z=x*y;
    cout<<"Multiplication of entered numbers is: "<<z<<endl;
}

void divide(int x, int y)
{
    float z;
    z=float(x)/float(y);
    cout<<"Divison of entered numbers is: "<<z<<endl;
}

void mod(int x, int y)
{
    int z;
    z=x%y;
    cout<<"Modulus of entered numbers is: "<<z<<endl;
}