#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
};
class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
            Demo()
        {
            i=10;
            j=20;
            k=30;
        }

    friend void Hello :: fun();
};

void Hello :: fun()
{
    Demo obj;
    cout<<"value of i is:"<<obj.i<<"\n";
    cout<<"value of j is:"<<obj.j<<"\n";
    cout<<"value of k is:"<<obj.k<<"\n";

}

int main()
{
    Hello hobj;
    hobj.fun();

    return 0;
}