#include<iostream>
using namespace std;

class Demo
{
    public:

        inline int Addition(int no1, int no2)
        {
            int ans = 0;

            ans = no1 + no2;

            return ans;
        }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";

    int ret = 0;

    ret = obj.Addition(20,30);

    cout<<ret<<"\n";
    return 0;
}