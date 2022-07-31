#include <iostream>
#include <string.h>
using namespace std;

class student
{   
    protected:
        int roll_no;
        char name[20];

    public:
        student()
        {
            roll_no=101;
            strcpy(name,"Ram");
            
        }

};

class subjectScore:protected student
{
    protected:
        int score1;
        int r;
        char n[20];

    public:
        void subject()
        {
            r=roll_no;
            strcpy(n,name);
            cout<<"Enter subject score: ";
            cin>>score1;


            cout<<"RollNo: "<<r<<endl;
            cout<<"Name: "<<n<<endl;
            cout<<"Subject Score: "<<score1<<endl;

        }

};

class gameScore:protected student
{
    protected:
        int score2;
        int r1;
        char n1[20];

    public:
        void game()
        {
            r1=roll_no;
            strcpy(n1,name);
            cout<<"Enter game score: ";
            cin>>score2;

            cout<<"RollNo: "<<r1<<endl;
            cout<<"Name: "<<n1<<endl;
            cout<<"Game Score: "<<score2<<endl;

        }
};

class result: protected subjectScore, protected gameScore
{
    private:
        int finalscore=0;

    public:
        void showResult()
        {
            finalscore=score1+score2;

            cout<<"\nSubject Score: "<<score1;
            cout<<"\nGame Score: "<<score2;
            /*
            cout<<"\nTotal Score: "<<finalscore<<"\n";

            if(finalscore>=0 && finalscore<=50)
            {
                cout<<"\tRate: Poor";
            }

            else if(finalscore>=51 && finalscore<=100)
            {
                cout<<"\tRate: *";
            }

            else if(finalscore>=101 && finalscore<=200)
            {
                cout<<"\tRate: **";
            }

            else if(finalscore>=201 && finalscore<=300)
            {
                cout<<"\tRate: ***";
            }

            else if(finalscore>=301 && finalscore<=400)
            {
                cout<<"\tRate: ****";
            }

            else
            {
                cout<<"\tRate: *****";
            }
            */
/*
            switch(finalscore)
            {
                case 250: cout<<"okay"; break;
                default: cout<<"------";
                case(finalscore<=50 && finalscore>=0):
                    cout<<"\tRate: Poor"; break;
                case(finalscore>=51 && finalscore<=200):
                    cout<<"\tRate: *"; break;
                case(finalscore>=201 && finalscore<=300):
                    cout<<"\tRate: **"; break;
                case(finalscore>=301 && finalscore<=400):
                    cout<<"\tRate: ***"; break;
                case(finalscore>=401 && finalscore<=500):
                    cout<<"\tRate: ****"; break;
                case(finalscore>=501 && finalscore<=600):
                    cout<<"\tRate: *****";
                default:
                    cout<<"----------";

                    
            }
            */
        }
};


int main()
{
    student obj;

    subjectScore obj1;
    gameScore obj2;
    obj1.subject();
    obj2.game();


    result obj3;
    obj3.showResult();


    return 0;
}