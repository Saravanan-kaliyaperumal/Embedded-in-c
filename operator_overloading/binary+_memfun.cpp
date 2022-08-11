#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	A operator+(A &);
	void print();	
};
A A::operator+(A &ob2)
{
cout<<"Binary+ operation function"<<endl;
A res;
res.x=x+ob2.x;
res.y=y+ob2.y;
return res;
}
void A::print()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
A obj1(10,20),obj2(11,22),obj3;
obj3=obj1+obj2;
cout<<"obj1 data:\n";
obj1.print();
cout<<"obj2 data:\n";
obj2.print();
cout<<"obj3 data:\n";
obj3.print();
}
