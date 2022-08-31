#include<iostream>
using namespace std;
struct st
{
	int x,y;
	void fun()
	{
		cout<<"fun function"<<endl;
	}
};
int main()
{
	struct st v={10,20};
	cout<<"v.x="<<v.x<<endl;
	cout<<"v.y="<<v.y<<endl;
	v.fun();
}
