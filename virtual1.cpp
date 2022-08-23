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
    Base obj1;
    Derived obj2;


    Base *bp = new Base();
    Derived *dp = new Derived();

    return 0;
}