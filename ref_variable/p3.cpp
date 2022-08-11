#include<iostream>
using namespace std;
int& fun()
{
        return 10;
}
int main()
{
        int x=fun();
        cout<<"x="<<x<<endl;
}

