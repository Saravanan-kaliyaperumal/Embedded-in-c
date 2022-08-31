#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		void setdata()
		{
			cin>>x>>y;
		}
		void add(A &ob1, A &ob2)
		{
			x=ob1.x+ob2.x;
			y=ob1.y+ob2.y;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};
int main()
{
	A obj1,obj2,obj3;
	cout<<"Enter obj1 data\n";
	obj1.setdata();
	cout<<"Enter obj2 data\n";
	obj2.setdata();
	obj3.add(obj1,obj2);
	cout<<"Obj1 data\n";
	obj1.print();
	cout<<"Obj2 data\n";
	obj2.print();
	cout<<"Obj3 data\n";
	obj3.print();
}
