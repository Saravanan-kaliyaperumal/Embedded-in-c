#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	friend A operator+(const A&,A&);
	void print();
};
A operator+(const A &ob1, A &ob2)
{
	cout<<"Binary + operator function"<<endl;
	A res;
	res.x=ob1.x+ob2.x;
	res.y=ob1.y+ob2.y;
	return res;
}
void A::print()
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
	A obj1(10,20),obj2(11,22),obj3(12,33),obj4;
	obj4=obj1+obj2+obj3;
	cout<<"obj1.data:\n";
	obj1.print();
	cout<<"obj2.data:\n";
	obj2.print();
	cout<<"obj3.data:\n";
	obj3.print();
	cout<<"obj4.data:\n";
	obj4.print();
}
