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
            a=5;
        }
        compute(int x)
        {
            b=x;
        }
        int operator +(compute c)
        {
            int result;
            result = a + c.b;
            return result;
        }
};

int main()
{
    compute obj1,obj2(5);
    cout<<obj1+obj2;
    return 0;
}