#include<iostream>
using namespace std;
int& fun()
{
        int r= 10;
	return r;
}
int main()
{
        int x=fun();
        cout<<"x="<<x<<endl;
}

