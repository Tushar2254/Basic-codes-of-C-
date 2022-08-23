#include<iostream>
using namespace std;

class Arithematic
{
    public:
    // Characteristics
    int iNo1;
    int iNo2;

    // Behaviour

    Arithematic()   // Default Constructor
    {
        cout<<"Inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithematic(int A, int B)   // Parametrised Constructor
    {
        cout<<"Inside parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Arithematic()  // Destructor
    {
        cout<<"Inside Destructor\n";
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        //cout<<"add is =="<<iAns<<"\n";
        return iAns;
    }

    int Substraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        cout<<"sub is =="<<iAns;
        return iAns;
    }
};

int main()
{
    register int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter first number\n";
    cin>>iValue1;

    cout<<"Enter second number\n";
    cin>>iValue2;

    Arithematic obj1;
    Arithematic obj2(iValue1, iValue2);
    cout<<obj2.addition();

    return 0;
}