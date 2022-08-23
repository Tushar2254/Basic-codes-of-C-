#include<iostream>
using namespace std;

// public private

class Demo
{
    int i;
    public:
        int x;
    private:
        int y;
    public:
        Demo()
        {
            cout<<"Inside demo \n";
            i=10;
            x=20;
            y=30;
        }
    
    public:
        void fun()
        {
            cout<<"Inside fun\n";
            cout<<y<<"\n";
            gun();
        }
    private:
        void gun()
        {
            cout<<"Inside gun\n";
        }
};

int main()
{
    Demo obj;
    cout<<"value is:"<<obj.x<<"\n";

    obj.fun();


    return 0;
}