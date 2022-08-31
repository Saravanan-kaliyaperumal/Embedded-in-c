#include<iostream>
using namespace std;
class A
{
	public:
		~A(){
			cout<<"Destructor-A"<<endl;
		}
};
class B:public A
{
	public:
		~B()
		{
			cout<<"Destructor-B"<<endl;
		}
};
class C:public B
{
	public:
		~C()
		{
			cout<<"Destructor-C"<<endl;
		}
};
int main()
{
//	C c;
	
/*	C *dptr=new C;
	delete dptr;
	
*/	
	A *bptr=new C;
	delete bptr;
	
}
