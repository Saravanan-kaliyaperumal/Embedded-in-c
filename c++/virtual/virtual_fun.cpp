#include<iostream>
using namespace std;
class A
{
	public:
		virtual void fun()
		{
			cout<<"fun function-A"<<endl;
		}
};
class B:public A
{
	public:
		void fun()
		{
			cout<<"fun function-B"<<endl;
		}
};
int main()
{
	A* bptr;
	B b;
	bptr=&b;
	bptr->fun();
	
	/*A a
	 B *bptr;
	 bptr=&a;
	 bptr->fun();
	 */
}
