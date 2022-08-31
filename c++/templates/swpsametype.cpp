#include<iostream>
using namespace std;
template <class dType>
void swp(dType &,dType &);
int main()
{
	int x=10,y=20;
	char ch1='A',ch2='B';
	float f1=22.7,f2=4.5;
	swp(x,y);
	swp(ch1,ch2);
	swp(f1,f2);
	cout<<"After swapping"<<endl;
	cout<<"x="<<x<<" y="<<y<<endl;
	cout<<"ch1="<<ch1<<" ch2="<<ch2<<endl;
	cout<<"f1="<<f1<<" f2="<<f2<<endl;
}
template<class dType>
void swp(dType &x,dType &y)
{
	dType temp;
	temp=x;
	x=y;
	y=temp;
}
