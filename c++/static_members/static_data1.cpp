#include<iostream>
using namespace std;
class A
{
	public:
		static int z;
		A():z(10)
	{
		cout<<"constructor"<<endl;
	}
};
int A::z=15;
int main()
{
	A obj1;
}
