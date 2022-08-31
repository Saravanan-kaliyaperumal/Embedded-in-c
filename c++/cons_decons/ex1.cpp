#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		A():x(10),y(20)
	{
		cout<<"x="<<x<<" y="<<y<<endl;
		x=30,y=40;//assignment
	}
		void print()
		{
			cout<<"x="<<x<<" y="<<y<<endl;
		}
};
int main()
{
	A obj;
	obj.print();
}
