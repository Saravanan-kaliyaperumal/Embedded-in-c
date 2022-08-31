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
	cout<<"enter the obj1 data"<<endl;
	obj1.setdata();
	cout<<"enter the obj2.data"<<endl;
	obj2.setdata();
	obj3.add(obj1,obj2);
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
	cout<<"obj3 data"<<endl;
	obj3.print();
}

