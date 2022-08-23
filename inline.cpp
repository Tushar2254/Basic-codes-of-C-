#include<iostream>
using namespace std;

class Demo
{
   public:
    int Add(int a, int b)
    {
        int ans = 0;
        ans = a + b;

        return ans;
    }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";

    int ret = 0;

    ret = obj.Add(10,20);

    cout<<ret;

    return 0;
}