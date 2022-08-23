#include<iostream>
using namespace std;

class Demo
{
    public:
       int i,j;

       void gun()
       {
           cout<<"Inside gun"<<"\n";
       }
       void fun()
       {
           cout<<"Inside fun"<<"\n";
       }
       void fun(int no)
       {
           cout<<"Inside gun"<<"\n";
       }

};

int main()
{
    Demo obj;

    return 0; 
}