#include<iostream>
using namespace std;
int& fun()
{
        static int r= 10;
        return r;
}
int main()
{
        int x=fun();
        cout<<"x="<<x<<endl;
}

