#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A():x(10)
	{
		cout<<"Constructor-A"<<endl;
	}
		A(int a):x(a)
	{
		cout<<"Parameterized constructor-A"<<endl;
	}
		~A()
		{
			cout<<"Destrictor-A"<<endl;
		}
};
class B:public A
{
	public:
		int y;
		B():y(20)
	{
		cout<<"Constructor-B"<<endl;
	}
		B(int a,int b):A(a),y(b)
		{
			cout<<"parameterized constructor-B"<<endl;
		}
		~B()
		{
			cout<<"Destructor-B"<<endl;
		}
};
class C:public B
{
	public:
		int z;
		C():z(30)
	{
		cout<<"constructor-C"<<endl;
	}
		C(int a,int b,int c):B(a,b),z(c)
	{
		cout<<"Parameterized constructor-C"<<endl;
	}
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		~C()
		{
			cout<<"Destructor-C"<<endl;
		}
};
int main()
{
	C obj1,obj2(11,22,33);
	cout<<"size obj1:"<<sizeof obj1<<endl;
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
}

