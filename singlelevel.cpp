#include<iostream>
using namespace std;

class Base
{
    public:
        int x;
        int y;
        Base()
        {
            cout<<"Inside base constructor\n";
        }
        ~Base()
        {
            cout<<"inside base destructor\n";
        }
        void fun()
        {
            cout<<"inside fun\n";
        }
};

class Derived : public Base
{
    public:
        int i;
        int j;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"inside derived destructor\n";
        }
        void gun()
        {
            cout<<"inside gun\n";
        }
};

int main()
{
    Derived obj;

    cout<<"size of base is:"<<sizeof(Base)<<"\n";
    cout<<"size of derived is:"<<sizeof(Derived)<<"\n";

    obj.fun();
    obj.gun();
    

    return 0;
    
}

