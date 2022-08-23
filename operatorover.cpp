#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo(int i = 10, int j =20)
        {
            x = i;
            y = j;
        }    
        
};
        Demo operator + (Demo op1 , Demo op2)
        {
            cout<<"Inside + operator \n";

            return Demo(op1.x + op2.x , op1.y + op2.y);
        }

int main()
{
    Demo obj1(11,21);
    Demo obj2(21,31);
    Demo ret(0,0);

    ret = obj1 + obj2;            // robj = +(obj1, obj2);
    cout<<ret.x<<"\n";              // 32
    cout<<ret.y<<"\n";              // 52


return 0;

}


