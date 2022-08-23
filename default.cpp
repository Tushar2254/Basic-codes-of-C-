#include<iostream>
using namespace std;

float Area(float fradius,float pi=3.14)
{
    float ret=0;
    ret=fradius*pi;
    return ret;
}

int main()
{
    float fret=0.0;

    fret=Area(10.4 , 2.6);
    cout<<"value is:"<<fret<<"\n";

    fret=Area(10.4);
    cout<<"value is:"<<fret<<"\n";

    return 0;



}