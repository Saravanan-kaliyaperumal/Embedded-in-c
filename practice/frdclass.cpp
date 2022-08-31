#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
		friend class B;
};
class B
{
	public:
		void setdata(A &ob)
		{
			cout<<"Enter values\n";
			cin>>ob.x>>ob.y;
		}
		void print(A &ob)
		{
			cout<<"x="<<ob.x<<"y="<<ob.y<<endl;
		}
};
int main()
{
	A obj;
	B b;
	b.setdata(obj);
	b.print(obj);
}


