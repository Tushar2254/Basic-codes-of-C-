#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void sun()
        {
            cout<<"inside base sun\n";
        }
        void fun()
        {
            cout<<"inside fun\n";
        }
};

class Derived:public Base
{
    public:
        int a,b;
        void sun()
        {
            cout<<"inside derived sun\n";
        }
        void fun(int x, int y)
        {
            cout<<"inside fun\n";
        }

};

int main()
{
    Derived obj;

    obj.sun();

    return 0;
}