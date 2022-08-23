#include<iostream>
using namespace std;
 class Demo
 {
     public:
     int x;
     int y;

     Demo()
     {
         cout<<"Inside default constructor\n";
     }
     ~Demo()
     {
         cout<<"Inside destructor\n";
     }
     void fun()
     {
         cout<<"Inside fun\n";

     }
 };

 int main()
 {
    Demo obj;
    Demo *p=NULL;

    p= new Demo;              // dynamic memory allocation
    obj.fun();               // direct accesssing opertaor

    p->fun();           //indirect accessing operator

    delete p;
    return 0;

 }