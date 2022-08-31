#include<iostream>
using namespace std;
class wife;
class husband
{
	private:
		char name[50];
		float salary;
	public:
		void setdata()
		{
			cout<<"enter husband name"<<endl;
			cin>>name;
			cout<<"Enter husband salary"<<endl;
			cin>>salary;
		}
		void print()
		{
			cout<<"Husband details\n";
			cout<<"husband name:"<<name<<endl;
			cout<<"husband salry:"<<salary<<endl;
		}
		friend void total_salary(husband &, wife &);
};
class wife
{
	private:
		char name[50];
		float salary;
	public:
		void setdata()
		{
			cout<<"enter wife name"<<endl;
			cin>>name;
			cout<<"Enter wife salary"<<endl;
			cin>>salary;
		}
		void print()
		{
			cout<<"wife details\n";
			cout<<"wife name:"<<name<<endl;
			cout<<"wife salry:"<<salary<<endl;
		}
		friend void total_salary(husband &, wife &);
};
void total_salary(husband &h, wife &w)
{
	float total;
	total=h.salary+w.salary;
	cout<<"Total salry="<<total<<endl;
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
