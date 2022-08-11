#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	void operator()(int a, int b)
	{
		x=a,y=b;
	}
	void print();
};
void A::print()
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
	A obj(10,20);
	cout<<"Initial obj data:\n";
	obj.print();
	obj(11,22);
	cout<<"After modify obj data\n";
	obj.print();
}
