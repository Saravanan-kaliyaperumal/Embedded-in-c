#include<iostream>
using namespace std;
namespace first
{
	int x=10,y=20;
}
namespace second
{
	int x=20,y=40;
}
namespace third
{
	int x=30,y=50;
}
int main()
{
	{
	using namespace first;
	cout<<"x="<<x<<"y="<<y<<endl;
	}
	{
	using namespace second;
	cout<<"x="<<x<<"y="<<y<<endl;
	}
	using namespace third;
	cout<<"x="<<x<<"y="<<y<<endl;
}
