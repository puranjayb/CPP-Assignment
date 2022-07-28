#include <iostream>
using namespace std;

class compute
{
    private:
        int a;
        int b;
    public:
        compute()
        {
            a=10;
        }

        compute(int x)
        {
            b=x;
        }

        void operator +(compute c)
        {
            cout<<a+c.b;
        }
};

int main()
{
    compute obj1, obj2(20);
    obj1+obj2;
    return 0;
}