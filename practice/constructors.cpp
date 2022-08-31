#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		A():x(12),y(24)
	{
		cout<<"Default constructor\n";
	}
		A(A &ob):x(ob.x),y(ob.y)
	{
		cout<<"Copy constructor\n";
	}
		A(int a, int b=22):x(a),y(b)
	{
		cout<<"parameterised constructor\n";
	}
		void print()
		{
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
int main()
{
	A obj1(10,20);
	cout<<"oj1 data\n";
	obj1.print();
	A obj2;
	cout<<"obj2 data\n";
	obj2.print();
	A obj3 =obj2;
	  cout<<"obj3 data"<<endl;
	  obj3.print();
	  /*
	A obj3;
	obj3=obj1;
	cout<<"obj3 data\n";
	obj3.print();*/
}
