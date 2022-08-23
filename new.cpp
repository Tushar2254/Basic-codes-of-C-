#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int *p=NULL;

    //p= int*malloc(sizeof(int))
    p= new int[5];
    

    if(p==NULL)
    {
        cout<<"unable to allocate memory\n";

    }
    else
    {
        cout<<"Memory allocated succesfully"<<p<<"\n";

    }
    
    delete []p;


    return 0;
    
}