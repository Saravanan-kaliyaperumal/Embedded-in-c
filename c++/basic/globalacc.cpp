#include<iostream>
using namespace std;
int x=10;
int main()
{
	int x=20;
	cout<<"x="<<x<<endl;
	cout<<"::x="<<::x<<endl;
	{
		int x=30;
		cout<<"In block x="<<x<<endl;
		cout<<"::x="<<::x<<endl;
	}
}
