#include<iostream>
using namespace std;
struct A
{
	protected:
		int x,y;
	public:
		void setdata();
		void print();
};
void A::setdata()
{
	cout<<"enter the data"<<endl;
	cin>>x>>y;
}
void A::print()
{
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}
int main()
{
	A obj;
	obj.setdata();
	obj.print();
}
