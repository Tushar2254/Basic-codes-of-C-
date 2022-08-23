#include<iostream>
using namespace std;

class Arithematic
{

    public:
    int ino1;
    int ino2;

    Arithematic()
    {
        cout<<"Inside constructor\n";
        ino1;
        ino2;
    }
    Arithematic(int a, int b)
    {
        cout<<"Inside parameterised constructor\n";
        ino1=a;
        ino2=b;
    }
    ~Arithematic()
    {
        cout<<"Default constructor\n";

    }
    int Addition()
    {
        int ans=0;
        ans=ino1+ino2;

        return ans;
    }
    int Substraction()
    {
        int ans=0;
        ans=ino1-ino2;

        return ans;
    }
};

int main()
{
    int x=0,y=0,z=0;

    cout<<"Enter first no:";
    cin>>x;

    cout<<"Enter second no:";
    cin>>y;

    Arithematic obj1();
    Arithematic obj2(x,y);

    z=obj2.Addition();
    cout<<"Addition is :" <<z<<"\n";

    z=obj2.Substraction();
    cout<<"Substraction is :"<<z<<"\n";


    return 0;
}


