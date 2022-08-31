#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<"constructor-A"<<endl;
	}
	~A()
	{
		cout<<"Destructor-A"<<endl;
	}
};
class B:public A
{
	public:
		B():A()
	{
		cout<<"constructor-B"<<endl;
	}
		~B()
		{
			cout<<"destructor-B"<<endl;
		}
};
int main()
{
	B obj;
}
