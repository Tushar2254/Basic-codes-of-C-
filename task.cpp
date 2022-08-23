#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;
   // int z;

    // Demo(int a , int b)
    // {
    //     x=a;
    //     y=b;
    // }
    // ~Demo()
    // {
    //     cout<<"inside destructor\n";
    // }

    int Area(int a , int b)
    {
        int ans=0;
        ans= a*b;
        return ans;
    }
};

int main()
{
    
    Demo obj;
    int ans=0,len=0,bre=0;

    
    

    //int a=0;
   // int b=0;

    cout<<"ENter length"<<"\n";
    cin>>len;

    cout<<endl<<"ENter breadth";
    cin>>bre;

    ans=obj.Area(len,bre);
    cout<<"area is"<<ans;
    return 0;


}