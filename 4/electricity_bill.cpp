#include <iostream>
using namespace std;

int main()
{
    char name[20];
    int K_NO,bill_amount,unit_used,meter_charge=100;

    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter K-No: ";
    cin>>K_NO;
    cout<<"Enter unit of electricity used: ";
    cin>>unit_used;

    if(unit_used>=0 && unit_used<=100)
    {
        bill_amount=meter_charge;
    }
    if(unit_used>100 && unit_used<=200)
    {
        bill_amount= 8*unit_used + meter_charge;
    }
    if(unit_used>200 && unit_used<=400)
    {
        bill_amount=10*unit_used + meter_charge;
    }
    if(bill_amount>4000)
    {
        bill_amount=bill_amount + 0.1*bill_amount;
    }

    cout<<"\n--------------------";
    cout<<"\nName: "<<name;
    cout<<"\nK-No: "<<K_NO;
    cout<<"\nTotal Bill: "<<bill_amount;
    cout<<"\n--------------------";

    return 0;

}
