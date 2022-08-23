#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        void fun()                              //concrete non virtual function
        {
            cout<<"Inside base fun\n";
        }
        virtual void sun()                   //concrete virtual function
        {
            cout<<"Inside base sun\n";
        }
        virtual void run()              //concrete virtual function
        {
            cout<<"Inside base run\n";
        }
        virtual void mun()=0;                    // abstract function

};
class Derived : public Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Derived fun\n";
        }
        virtual void sun()               // overridden function
        {
            cout<<"Inside derived sun\n";
        }
        void mun()                      // concrete function
        {
            cout<<"Inside mun\n";
        }
        
};

int main()
{
   // Base bobj;
    Derived Dobj;

    Base *bp = NULL;
    bp = &Dobj;

    cout<<"size of base is:"<<sizeof(Base)<<"\n";
    cout<<"size of Derived is:"<<sizeof(Derived)<<"\n";

    bp->fun();
    bp->sun();
    bp->run();
    bp->mun();



    return 0;


}