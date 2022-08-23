#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
};
class hello : public Demo
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
    public:
        void fun()
        {
            cout<<k<<"\n";
        }
};

int main()
{
    Demo obj;
    cout<<"size is:"<<sizeof(Demo)<<"\n";
    cout<<"size is:"<<sizeof(hello)<<"\n";

    cout<<obj.i<<"\n";

    hello hobj;
    hobj.fun();

}