#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	void operator=(A &ob1);
	void print();
};
void A::operator=(A &ob1)
{
	cout<<"Assignment operator function"<<endl;
	x=ob1.x;
	y=ob1.y;
}
void A::print()
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
	A obj1(10,20),obj2;
	obj2=obj1;
	cout<<"obj1 data:\n";
	obj1.print();
	cout<<"obj2 data:\n";
	obj2.print();
}
