#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"default constructop\n";
        x = 0;
        y = 0;
    }
    Demo(int a, int b)
    {
        cout<<"inside parameterised constructor\n";
        x = a;
        y = b;
    }
    Demo(Demo  &ref)
    {
        cout<<"Inside copy constructor\n";
        x = ref.x;
        y = ref.y;
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";

    }

};

int main()
{
    Demo obj1(11,21);
    Demo obj2(obj1);
   // Demo obj3(Demo , ref.x);


    return 0;

}