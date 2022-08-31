#include<iostream>
using namespace std;
const int& fun()
{
        return 10;
}
int main()
{
        int x=fun();
        cout<<"x="<<x<<endl;
}

