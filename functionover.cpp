#include<iostream>
using namespace std;
 class Demo
 {
     public:
        int Addition(int a, int b)
        {
            int ans=0;
            ans=a+b;
            return ans;
        }
         int Addition(int a, int b, int c)
        {
            int ans=0;
            ans=a+b+c;
            return ans;
        } 
        int Addition(int a, int b,int c ,int d)
        {
            int ans=0;
            ans=a+b+c+d;
            return ans;
        }
 };

 int main()
 {
     int ret=0;
     Demo obj;

     ret=obj.Addition(10,11);
     cout<<"Value is :"<<ret<<"\n";

    ret=obj.Addition(10,11,11,12);
     cout<<"Value is :"<<ret<<"\n";

     return 0;
 }