#include <iostream>
using namespace std;

void add(int a,int b);
void add(char a,char b);

int main(){
    add(5,6);
    add('a','b');
    return 0;
}

void add(int y,int z){
    int x;
    x= y+z;
    cout<<x<<"\n";
}

void add(char y, char z){
    cout<<y<<z;
}

