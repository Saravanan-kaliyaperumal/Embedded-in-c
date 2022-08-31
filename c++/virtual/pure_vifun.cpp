#include<iostream>
using namespace std;
class A
{
	public:
		virtual void print()=0;
};
class B:public A
{
	protected:
		int x,y;
	public:
		B():x(10),y(20){}
		void print()
		{
			cout<<"class-B print()..."<<endl;
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
class C:public A
{
	protected:
		int m,n;
	public:
		C():m(11),n(22){}
		void print()
		{
			cout<<"class-C print()..."<<endl;
			cout<<"m="<<m<<"n="<<n<<endl;
		}
};
int main()
{
	A *bptr;
	B b;
	bptr=&b;
	bptr->print();

	C c;
	bptr=&c;
	bptr->print();
}
