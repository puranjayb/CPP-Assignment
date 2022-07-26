#include <iostream>
using namespace std;
int temp=0;

class users{
    private:
        char name[20];
        int acc_no;
        char acc_type[5];
        int amount;
    public:
        void input(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter account number: ";
            cin>>acc_no;
            cout<<"Enter account type: ";
            cin>>acc_type;
            cout<<"Enter the amount: ";
            cin>>amount;
        }

        void output(){
            cout<<name<<"\t"<<acc_no<<"\t"<<acc_type<<"\t"<<amount<<"\n";
            temp=temp+amount;
        }

        void total(){
            cout<<temp;
        }
};

int main(){
    users obj[3];

    for(int i=0;i<3;i++){
        obj[i].input();
    }

    for(int i=0;i<3;i++){
        obj[i].output();
    }
    obj[0].total();

    return 0;
}