#include<iostream>
using namespace std;
int divide(int a,int b)
{
	if(b==0)
		throw "divide by zero exception";
	else
		return a/b;
}
int main()
{
	int x,y,z;
	cout<<"enter the x value"<<endl;
	cin>>x;
abc:
	cout<<"enter the y value"<<endl;
	cin>>y;
	try
	{
		z=divide(x,y);
	}
	catch(const char* p)
	{
		cout<<p<<endl;
		goto abc;
	}
	cout<<"z="<<z<<endl;
}

