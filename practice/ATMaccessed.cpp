#include<iostream>
using namespace std;
class ATM
{
	static int count;
	ATM()
	{
		count ++;
	}
	public:
	static void fun()
	{
		ATM obj;
	}
	static void print()
	{
		cout<<"cout="<<count<<endl;
	}
};
int ATM::count=0;
int main()
{
	char ch;
	do
	{
		ATM::fun();
		cout<<"Do u want to access ATM again\n";
		cin>>ch;
	}while((ch=='y')||(ch=='Y'));
	ATM::print();
}
