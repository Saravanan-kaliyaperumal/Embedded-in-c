#include<iostream>
using namespace std;
class A
{
	int x,y;
	static int z;
	public:
	A(int a,int b):x(a),y(b){}
	static void static_printfun()
	{
		cout<<"In static_printfun function"<<endl;
//		cout<<"x="<<x<<" y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
	void non_static_printfun()
	{
		cout<<"In non_static_printfun function"<<endl;
		cout<<"x="<<x<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
};
int A::z=1;
int main()
{
	A obj(10,20);
//	obj.static_printfun();
	A::static_printfun();
	obj.non_static_printfun();
//	A::non_static_printfun(&obj);
}
