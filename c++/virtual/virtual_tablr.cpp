#include<iostream>
using namespace std;
class A
{
	public:
		virtual void fun1()
		{
			cout<<"class-A virtual fun1 function"<<endl;
		}
		virtual void fun2()
		{
			cout<<"class-A virtual fun2 function"<<endl;
		}
		void fun3()
		{
			cout<<"class-A fun3 function"<<endl;
		}
};
class B:public A
{
	public:
		void fun1()
		{
			cout<<"class-B fun1 function"<<endl;
		}
};
class C:public A
{
	public:
		void fun2()
		{
			cout<<"class-C fun2 funcion"<<endl;
		}

};
int main()
{
	A* bptr;
	B b;
	bptr=&b;
	bptr->fun1();
	bptr->fun2();
	bptr->fun3();

	C c;
	bptr=&c;
	bptr->fun1();
	bptr->fun2();
	bptr->fun3();
}

