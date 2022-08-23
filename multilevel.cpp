#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo()
        {
            cout<<"inside constructor\n";
        }
        ~Demo()
        {
            cout<<"inside destructor\n";

        }

};
class Derived : public Demo
{
    public:
        int x,y;

        Derived()
        {
            cout<<"inside constructor\n";
        }
        ~Derived()
        {
            cout<<"inside destructor\n";

        }
};
class Derived1: public Derived
{
    public:
        int a,b;

        Derived1()
        {
            cout<<"inside constructor\n";
        }
        ~Derived1()
        {
            cout<<"inside destructor\n";

        }
};

int main()
{
    Derived1 obj;
    return 0;
}