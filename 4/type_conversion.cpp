#include <iostream>
using namespace std;

int main()
{
    int x=100,y=101;
    float z;
    z=x+y; //implicit type conversion since x and y are of integer type i.e. less size they can be stored in float.
    cout<<z;
    return 0;
}