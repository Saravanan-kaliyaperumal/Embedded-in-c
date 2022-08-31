#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter total no of students"<<endl;
	cin>>num;
	float *stu;
	stu=new float[num];
	cout<<"Enter GPA of students"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"student"<<i+1<<": "<<endl;
		cin>>*(stu+i);
	}
	cout<<"Displaying the GPA of students"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"student"<<i+1<<": "<<*(stu+i)<<endl;
	}
	delete []stu;
	return 0;
}
