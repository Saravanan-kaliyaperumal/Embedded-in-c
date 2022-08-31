#include<iostream>
#include<stdio.h>
#include<stdio_ext.h>
using namespace std;
class student
{
	public:
		int roll;
		char name[20];
		void setdata()
		{
			cout<<"Enter roll no:"<<endl;
			cin>>roll;
			cout<<"enter name:"<<endl;
			__fpurge(stdin);
			cin.getline(name,20);
		}
		void display()
		{
			cout<<"Roll no="<<roll<<endl;
			cout<<"name="<<name<<endl;
		}
};
class int_exam:virtual public student
{
	public:
		float sub1,sub2,sub3;
		void setdata()
		{
			cout<<"enter Internal marks:"<<endl;
			cin>>sub1>>sub2>>sub3;
		}
		void display()
		{
			cout<<"Internal marks:"<<endl;
			cout<<sub1<<" "<<sub2<<" "<<sub3<<" "<<endl;
		}
};
class ext_exam:virtual public student
{
	public:
		float sub1,sub2,sub3;
		void setdata()
		{
			cout<<"enter External marks:"<<endl;
			cin>>sub1>>sub2>>sub3;
		}
		void display()
		{
			cout<<"External marks:"<<endl;
			cout<<sub1<<" " <<sub2<<" "<<sub3<<" "<<endl;
		}
};
class result:public int_exam,public ext_exam
{
	public:
		float total,average,per;
		void avg()
		{
			total=int_exam::sub1+int_exam::sub2+int_exam::sub3+ext_exam::sub1+ext_exam::sub2+ext_exam::sub3;
			average=total/6;
		}
		void display()
		{
			cout<<"Average:"<<endl;
			cout<<average<<endl;
		}
};
int main()
{
	result s;
	s.student::setdata();
	s.int_exam::setdata();
	s.ext_exam::setdata();
	s.avg();
	s.student::display();
	s.int_exam::display();
	s.ext_exam::display();
	s.display();

}
