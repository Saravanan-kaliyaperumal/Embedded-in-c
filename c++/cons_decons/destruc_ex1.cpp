#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor"<<endl;
		}
		~A()
		{
			cout<<"deconstuctor"<<endl;
		}
};
int main()
{
	{
		A obj1;
	}
	A obj2;
}
