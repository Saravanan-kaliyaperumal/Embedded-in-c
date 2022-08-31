#include<iostream>
using namespace std;
class A
{
};
class B:public A
{
	public:
		int x;
		void fun()
		{
			cout<<"fun function"<<endl;
		}
};
int main()
{
	A obj.x=10;
	obj.fun();
}
