#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();
};

class Demo
{
    public:
        int i;
    protected:
        int j;
    private:
        int k;

        public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
        friend void Hello :: fun();
        friend void Hello :: gun();
      
};
void Hello::fun()
{
    Demo obj1;
    cout<<"value of fun i is:"<<obj1.i<<"\n";
    cout<<"value of fun j is:"<<obj1.j<<"\n";
    cout<<"value of fun k is:"<<obj1.k<<"\n";
}
void Hello::gun()
{
    Demo obj1;
    cout<<"value of gun i is:"<<obj1.i<<"\n";
    cout<<"value of gun j is:"<<obj1.j<<"\n";
    cout<<"value of gun k is:"<<obj1.k<<"\n";
}

int main()

{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    return 0;
}