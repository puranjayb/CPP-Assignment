#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum=0;
    cout<<"Enter the range of sum of harmonic series: ";
    cin>>n;
    for(float i=1;i<=n;i++)
    {
        sum = sum + 1/i;
    }
    cout<<"Sum of the harmonic series is: "<<sum;

    return 0;
}