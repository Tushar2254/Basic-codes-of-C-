#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)  // member initialization
        {
            i = 10;
            //j = 20;
        }
};

int main()
{
    Demo dobj;

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";

    return 0;
}