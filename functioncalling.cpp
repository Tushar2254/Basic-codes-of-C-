#include<iostream>
using namespace std;

void callvalue(int no)
{
    no++;
}

void calladdress(int *p)
{
    (*p)++;
}
void callref(int &ref)
{
    ref++;

}

int main()
{
    int a=10,b=10,c=10;

    callvalue(a);
    cout<<"Value is:"<<a<<"\n";

    calladdress(&b);
    cout<<"Address is :"<<b<<"\n";

    callref(c);
    cout<<"reference is :"<<c<<"\n";


    return 0;
}