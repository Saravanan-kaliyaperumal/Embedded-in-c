#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"fun function()-A"<<endl;
		}
};
class B:public A
{
	public:
		void fun()
		{
			cout<<"fun function()-B"<<endl;
		}
};
int main()
{
	B b;
	b.fun();
	b.A::fun();
}
