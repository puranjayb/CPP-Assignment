#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
        char name[20];
        int age;
        char city[20];
    public:
        student(){
            strcpy(name,"Puranjay");
            age=19;
            strcpy(city,"Jaipur");
        }

        void showOutput(int x){
            cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<"\n"<<"City: "<<city<<"\n"<<"Marks: "<<x;
        }

};

int main(){

    student obj;
    int marks;
    char option;
    cout<<"Do you want 10 marks answer Y/N: ";
    cin>>option;

    if(option=='Y'||option=='y'){
        marks=10;
    }
    else if(option=='N'||option=='n'){
        marks=0;
    }
    else{
        cout<<"Invalid choice";
    }

    obj.showOutput(marks);

}