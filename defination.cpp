#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    
        void fun()
        {
            cout<<"Inside fun"<<"\n";

        }
        void gun()
        {
            cout<<"Inside gun"<<"\n";
            
        }
    
};

int main()
{
    Demo obj;

    return 0;
}