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

int main()
{
    Derived obj;
    return 0;
}