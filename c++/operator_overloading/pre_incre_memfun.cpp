#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	A operator++();
	void print();
};
A A::operator++()
{
	cout<<"pre increment operator function"<<endl;
	A res;
	res.x=++x;
	res.y=++y;
	return res;
}
void A::print()
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
	A obj1(10,20),obj2;
	obj2=++obj1;
	cout<<"obj1 data\n";
	obj1.print();
	cout<<"obj2 data\n";
	obj2.print();
}
