#include<iostream>
using namespace std;
class wife;
class husband
{
	private:
		char name[20];
		float salary;
	public:
		void setdata()
		{
			cout<<"enter husband name&salary\n";
			cin>>name>>salary;
		}
		void print()
		{
			cout<<"Husband details:"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"salary:"<<salary<<endl;
		}
		friend void total_salary(husband & , wife &);
};
class wife
{
	private:
		char name[20];
		float salary;
	public:
		void setdata()
		{
			cout<<"enter wife name&salary\n";
			cin>>name>>salary;
		}
		void print()
		{
			cout<<"wife details:"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"salary:"<<salary<<endl;
		}
		friend void total_salary(husband & , wife &);
};
void total_salary(husband &h, wife &w)
{
	float total;
	total=h.salary+w.salary;
	cout<<"Husband and wife salary details\n";
	cout<<"total salary="<<total<<endl;
}
int main()
{
	husband h;
	wife w;
	h.setdata();
	h.print();

	w.setdata();
	w.print();

	total_salary(h,w);
}
