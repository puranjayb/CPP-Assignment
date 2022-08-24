/*
"Write a C++ program to guess a number between 1 to 9. Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.
*/

#include <iostream>
using namespace std;

int main()
{
    int correct=4;
    int guess;
    tryagain:
    {
        cout<<"Guess a number between 1 to 9: ";
        cin>>guess;
    }
    

    if(guess<=9)
    {
        if(guess==correct)
        {
            cout<<"Well guessed!";
        }

        else
        {
            cout<<"Try again!"<<endl;
            goto tryagain;
        }
    }

    else
    {
        cout<<"Invalid range";
    }

    return 0;
}