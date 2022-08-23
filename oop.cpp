#include<iostream>
using namespace std;

class Arithematic
{
    public:
     //characterstics
    int iNo;
    int iNo;

    //behaviour

    Arithematic()  // constructor
    {
        cout<<"Inside default constructor\n";
        iNo=0;
        iNo=0;
    }
    Arithematic(int A, int B)  //parametrised constructor
    {
        cout<<"Inside default constructor\n";
        iNo=A;
        iNo=B;
    }

    ~Arithematic()    //Destructor
    {
        cout<<"inside Destructor\n";

    }

    int addition()
    {
        int ians=0;
        ians=iNo1 + iNo2;
        return ians;
    }
    
    int substraction()
    {
        int ians=0;
        ians=iNo1 - iNo2;
        return ians;
    }
};

int main()
{
    auto int ivalue1=0,ivalue2=0,iRet=0;

    cout<<"Enter first number\n";
    cin>>ivalue1;

    cout<<"Enter second number\n";
    cin>>ivalue2;


    Arithematic obj1();       //call line no 13
    Arithematic obj2(ivalue1,ivalue2);      //call line no 19

    iRet= obj2.addition()
    cout<<"Addition is:"<<iRet<<"\n";

    iRet= obj2.Substraction();
    cout<<"Substraction is:"<<iRet<<"\n";







    return 0;

}

// cout<<   ->printf()    -write()

//the language which is able to calll is called system call