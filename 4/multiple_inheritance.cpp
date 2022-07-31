#include <iostream>
using namespace std;

class Maths
{
    private:
        int marks1;
    public:
        void mathmarks()
        {
            cout<<"Enter Maths Marks: ";
            cin>>marks1;
        }
        int get1()
        {
            int a;
            a=marks1;
            return a;
        }
    
};

class English
{
    private:
        int marks2;
    public:
        void englishmarks()
        {
            cout<<"Enter English Marks: ";
            cin>>marks2;
        }
        int get2()
        {
            int b;
            b=marks2;
            return b;
        }
    
};

class Science
{
    private:
        int marks3;
    public:
        void sciencemarks()
        {
            cout<<"Enter Science Marks: ";
            cin>>marks3;
        }
        int get3()
        {
            int c;
            c=marks3;
            return c;
        }
};

class Result:public Maths,public English, public Science
{
    private:
        int score;
    public:
        Result(char x[], int y)
        {
            mathmarks();
            englishmarks();
            sciencemarks();

            cout<<"\nName: "<<x;
            cout<<"\nRoll Number: "<<y;
            cout<<"\nScore "<<get1()+get2()+get3();
        }

};

int main()
{
    int roll_no;
    char name[20];
    cout<<"Enter your roll no: ";
    cin>>roll_no;
    cout<<"Enter your name: ";
    cin>>name;

    Result obj4(name,roll_no);


}
