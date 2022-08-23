#include<iostream>
using namespace std;
class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
     
     public:
        Base()
        {
            i=10;
            int j=20;
            int k=30;
        }

        friend void fun();
        
};

void fun()
{
    Base obj;

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";

}

int main()
{
    fun();
    return 0;
}