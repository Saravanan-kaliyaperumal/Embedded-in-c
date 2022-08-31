#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A():x(10)
	{
		cout<<"constructor-A"<<endl;
	}
		A(int a):x(a)
	{
		cout<<"parameterized constructor-A"<<endl;
	}
		~A()
		{
			cout<<"Destructor-A"<<endl;
		}
};
class B:public A
{
	public:
		int y;
		B():A(),y(20)
	{
		cout<<"constructor-B"<<endl;
	}
		~B()
		{
			cout<<"Destructor-B"<<endl;
		}
};
class C:public A
{
	public:
	int z;
	C():A(11),z(30)
	{
		cout<<"constructor-C"<<endl;
	}
	~C()
	{
		cout<<"Destructor-C"<<endl;
	}
};
class D:public B,public C
{
	public:
		int m;
		D():B(),C(),m(40)
	{
		cout<<"constructor-D"<<endl;
	}
	void print()
	{
		//cout<<"x="<<x<<endl;
		cout<<"B::x="<<B::x<<endl;
		cout<<"C::x="<<C::x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
		cout<<"m="<<m<<endl;
	}
	~D()
	{
		cout<<"Destructor-D"<<endl;
	}
};
int main()
{
	D obj;
	obj.print();
}
