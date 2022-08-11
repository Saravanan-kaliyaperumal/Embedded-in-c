#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(10),y(20){}
	A* operator->()
	{
		return this;
	}
	void print()
	{
		cout<<"x="<<x<<"y="<<y<<endl;
	}
};
int main()
{
	A obj;
	cout<<"obj.data:\n";
	obj->print();
}
