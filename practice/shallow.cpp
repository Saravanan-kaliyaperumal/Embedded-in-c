#include<iostream>
#include<string.h>
using namespace std;
class A
{
	private:
		char *str;
	public:
		A(const char *p)
		{
			str=new char[strlen(p)+1];
			strcpy(str,p);
		}
		A(A &ob)
		{
			str=new char[strlen(ob.str)+1];
			strcpy(str,ob.str);
		}
		void modify()
		{
			str[0]='S';
		}
		void print()
		{
			cout<<"str="<<str<<endl;
		}
};
int main()
{
	A obj1("Vector");
	A obj2=obj1;
	obj1.modify();
	obj1.print();
	obj2.print();
}
