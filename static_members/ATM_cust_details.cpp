#include<iostream>
using namespace std;
class ATM
{
	int acc_no;
	char acc_name[20];
	double acc_bal;
	int atm_pin;
ATM()
{
	cout<<"enter the acc_no:"<<endl;
	cin>>acc_no;
	cout<<"enter the acc_name:"<<endl;
	cin>>acc_name;
	cout<<"enter the acc_bal:"<<endl;
	cin>>acc_bal;
	cout<<"enter atm_pin:"<<endl;
	cin>>atm_pin;
}
void print()
{
	cout<<"acc_no:"<<acc_no<<endl;
	cout<<"acc_name:"<<acc_name<<endl;
	cout<<"acc_bal:"<<acc_bal<<endl;
	cout<<"atm_pin:"<<atm_pin<<endl;
}
public:
static void ATM_fun()
	{
	ATM log;
	log.print();
	}
};
int main()
{
	ATM::ATM_fun();
}


