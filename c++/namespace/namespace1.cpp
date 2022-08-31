#include<iostream>
using namespace std;
namespace A
{
	int x=10,y=15;
}
namespace B
{
	int x=20,y=40;
}
int main()
{
	cout<<"A::x="<<A::x<<endl;
	cout<<"A::y="<<A::y<<endl;
	cout<<"B::x="<<B::x<<endl;
	cout<<"B::y="<<B::y<<endl;
}

