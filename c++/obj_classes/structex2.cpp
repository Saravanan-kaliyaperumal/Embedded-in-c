#include<iostream>
using namespace std;
struct st
{
	int x,y;
	void setdata()
	{
		cout<<"enter the data"<<endl;
		cin>>x>>y;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;

	}
};
int main()
{
	st v1,v2;
	cout<<"sizeof v1="<<sizeof v1<<endl;
	cout<<"for v1"<<endl;
	v1.setdata();
	v1.print();
	cout<<"for v2"<<endl;
	v2.setdata();
	v2.print();
}
