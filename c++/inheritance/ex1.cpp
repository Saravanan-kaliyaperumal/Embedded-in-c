#include<iostream>
using namespace std;
class base
{
	public:
		int x;
};
class derived:public base
{
	public:
		int y;
};
int main()
{
	base b;
	derived d;
	cout<<"size b="<<sizeof(b)<<endl;
	cout<<"size d="<<sizeof(d)<<endl;
	b.x=10;
//	d.x=11;
	d.y=22;
	cout<<"b.x="<<b.x<<endl;
	cout<<"d.x="<<d.x<<endl;
	cout<<"d.y="<<d.y<<endl;
}
