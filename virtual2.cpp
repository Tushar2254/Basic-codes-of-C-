#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

};
class Derived:public Base
{
    public:
        int a,b;

};

int main()
{

    Base *bp = new Base();
    Derived *dp = new Derived();

    Base *bp1 = new Derived();
    Derived *dp1= new Base();

    return 0;
}