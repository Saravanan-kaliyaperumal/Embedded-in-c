#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor"<<endl;
			throw 10;
		}
};
int main()
{
	try
	{
		A obj;
	}
	catch(int x)
	{
		cout<<"x="<<x<<endl;
	}
}
