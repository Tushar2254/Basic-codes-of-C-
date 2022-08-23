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
        Demo(int a, int b) : i(a),j(b)
        {
            cout<<"inside parameterised \n";
        }
};

int main()
{
    Demo dobj(11,22);

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";

    dobj.i++;
   // dobj.j++;
     cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";

    return 0;
}