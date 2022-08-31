#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		A():x(10){}
		A(int a):x(a){}
		virtual void print()=0;
};
class B:public A
{
	protected:
		int m;
	public:
		B():m(20){}
		void print()
		{
			cout<<"class-B print()..."<<endl;
			cout<<"x="<<x<<"m="<<m<<endl;
		}
};
class C:public A
{
	protected:
		int n;
	public:
		C():A(11),n(30){}
		void print()
		{
			cout<<"class-C print()..."<<endl;
			cout<<"x="<<x<<"n="<<n<<endl;
		}
};

int main()
{
	A *bptr;
	int op;
	cout<<"enter the option 1-class-B object data, 2-class-C object data"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:bptr=new B;break;
		case 2:bptr=new C;break;
		default:cout<<"Invalid option"<<endl;break;
		//return 0;
	}
	bptr->print();
}
