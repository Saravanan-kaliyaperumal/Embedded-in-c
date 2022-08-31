#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A()
	{
		cout<<"Default constuctor"<<endl;
	}
	A(int a,int b):x(a),y(b)
	{
		cout<<"Parameterised constructor"<<endl;
	}
	A(A &ob):x(ob.x),y(ob.y)
	{
		cout<<"copy constuctor"<<endl;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int main()
{
	A obj1(10,20);
	//A obj1;
	cout<<"obj1 data:"<<endl;
	obj1.print();
	A obj2=obj1;
	/*
	 A obj2;
	 obj2 = obj1;
	 */
	cout<<"obj2 data:"<<endl;
	obj2.print();
}
