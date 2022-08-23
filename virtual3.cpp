#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"inside fun\n";

        }
        void gun()
        {
            cout<<"inside gun\n";
            
        }
};
class Derived:public Base
{
    public:
        int x,y;
        void fun()
        {
            cout<<"inside derived fun\n";

        }
        void mun()
        {
            cout<<"inside mun\n";
            
        }
};

int main()
{
    Base *bp = new Derived();
    bp->fun();
    //bp->mun();    // NA

    cout<<"size of Base class is:"<<sizeof(Base)<<"\n";
    cout<<"size of Derived class is:"<<sizeof(Derived)<<"\n";

    return 0;
}