#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
};

class Base1
{
    public:
        int m,n;

        Base1()
        {
            cout<<"inside Base1 constructor\n";
        }
        ~Base1()
        {
            cout<<"Inside Base1 destructor\n";
        }
};

class Derived : public Base1 , Base

{
    public:
        int a;

        Derived()
        {
            cout<<"inside Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
};

int main()
{
    Derived obj;

    cout<<"size is :"<<sizeof(Derived)<<"\n";

    return 0;
}