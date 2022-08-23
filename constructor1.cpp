#include<iostream>

using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()          //Default constructore
    {
        cout<<"Inside Default constructor\n";
        x=0;
        y=0;

    }
    Demo(int i, int j)               //parameterised constructor
    {
        cout<<"Inside Parameterised constructor\n";
        x=i;
        y=j;

    }
    Demo(Demo &ref)            // copy constructor
    {
        cout<<"Inside copy constructor\n";
    }
    ~Demo()                 // Destructor
    {
        cout<<"Inside destructor\n";
    }


};

int main()
{
    
    Demo.obj1(51,21);
    Demo.obj2(11,21);
    cout<<"end of main\n";
    

    return 0;
}