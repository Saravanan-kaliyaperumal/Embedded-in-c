#include<iostream>
using namespace std;
class ATM
{
	int no;
	char name[20];
	float balance;
	int pin;
	ATM()
	{
		cout<<"no\n";
		cin>>no;
		cout<<"name\n";
		cin>>name;
		cout<<"balance\n";
		cin>>balance;
		cout<<"pin\n";
		cin>>pin;
	}
	void print()
	{
		cout<<"no:"<<no<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"balance:"<<balance<<endl;
		cout<<"pin:"<<pin<<endl;
	}
	public:
	static void fun()
	{
		ATM log;
		log.print();
	}
};
int main()
{
	ATM::fun();
}
