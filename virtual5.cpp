#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
        int j;
        int k;

        virtual void fun()
        {
            cout<<"Inside base fun\n";
        }
        void gun()
        {
            cout<<"Inside base gun\n";
        }
        void sun()
        {
            cout<<"Inside base sun\n";
        }
        void run()
        {
            cout<<"Inside base run\n";
        }
};
class Derived : public Base
{
    public:
        int x,y;
        void fun()
        {
            cout<<"Inside Derived fun\n";
        }
         virtual void gun()
        {
            cout<<"Inside derived gun\n";
        }
        virtual void sun()
        {
            cout<<"Inside derived sun\n";
        }
         virtual void mun()
        {
            cout<<"Inside derived mun\n";
        }
};

int main()
{
    cout<<"size is"<<sizeof(Base)<<"\n";

    Base *bp = new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();

    return 0;
}
