#include<iostream>
using namespace std;
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
		if(y!=0)
			z=x/y;
		else
			throw "divide by zero exception";
	}
	catch(const char *p)
	{
		cout<<p<<endl;
		goto abc;
	}
	cout<<"z="<<z<<endl;
}
