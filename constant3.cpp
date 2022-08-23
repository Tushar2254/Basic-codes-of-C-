#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)
        {
            i = 10;
            //j = 20;
        }

        Demo(int a, int b) :j(b)
        {
            i = a;
        }
};
int main()
{
    Demo dobj(11, 22);

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";


    return 0;
}