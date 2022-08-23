#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    int Add(int a,int b)
    {
        return a + b;
    }

    virtual int sub(int a , int b) = 0; 
};

class Derived : public Base
{
    public:
    int x,y;

    int sub(int a, int b)
    {
        return a-b;
    }


    int Mul(int a, int b)
    {
        return a*b;
    }
};

int main()
{
    Base *bp = new Derived();
    int ret=0;

    ret=bp->Add(11,12);
    cout<<"addition is :"<<ret<<"\n";

    ret=bp->sub(12,11);
    cout<<"Substraction is:"<<ret<<"\n";

    //ret= bp->Mul(1,2);
   // cout<<ret<<"\n";

    return 0;
}