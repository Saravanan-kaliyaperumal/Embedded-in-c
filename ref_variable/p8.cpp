#include<iostream>
using namespace std;
int fun(int &r)
{
	cout<<"In function r-"<<r<<endl;
	return r;
}
int main()
{
	int x=10;
	fun(x)=15;
	cout<<"x="<<x<<endl;
}
