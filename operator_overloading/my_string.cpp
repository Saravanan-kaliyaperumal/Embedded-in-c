#include<iostream>
#include<cstring>
#include<stdio.h>
#include<stdio_ext.h>
using namespace std;
class my_string
{
	char *p;
	public:
	my_string()
	{
		p=NULL;
	}
	my_string(const char *s)
	{
		p=new char[strlen(s)+1];
		strcpy(p,s);
	}
	void operator=(const char *s)
	{
		delete[]p;
		p=new char[strlen(s)+1];
		strcpy(p,s);
	}
	friend void my_getline(istream &,my_string &);
	friend ostream& operator<<(ostream &,my_string &);
	friend istream& operator>>(istream &,my_string &);
};
ostream& operator<<(ostream &out,my_string &obj)
{
	out<<obj.p;
	return out;
}
istream& operator>>(istream &in,my_string &obj)
{
	in>>obj.p;
	return in;
}
void my_getline(istream &in,my_string &obj)
{
	__fpurge(stdin);
	in.getline(obj.p,50);
}
int main()
{
	my_string str = "Hello";
	cout<<"str="<<str<<endl;
	str="Hello hai";
	cout<<"str="<<str<<endl;
	cout<<"enter string"<<endl;
	cin>>str;
	cout<<"str="<<str<<endl;
	my_string str2;
	str2="Sarvan";
	cout<<"str2="<<str2<<endl;
	cout<<"enter the string"<<endl;
	my_getline(cin,str2);
	cout<<"str="<<str2<<endl;
}
