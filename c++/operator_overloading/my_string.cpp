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

	int operator>=(my_string const &obj)
	{
		int c;
		c=strcmp(p,obj.p);
		if((c==1)||(c==0))
			return 1;
		else
			return 0;
	}

	int operator<=(my_string const &obj)
	{
		int c;
		c=strcmp(p,obj.p);
		if((c==-1)||(c==0))
			return 1;
		else
			return 0;
	}

	int operator<(my_string const &ob)
	{
		int c;
		c=strcmp(p,ob.p);
		if(c==-1)
			return 1;
		else
			return 0;
	}

	int operator==(my_string const &ob)
	{
		int c;
		c=strcmp(p,ob.p);
		if(c==0)
			return 1;
		else
			return 0;
	}

	my_string& operator+(my_string const& obj)
	{
		strcat(p,obj.p);
		return *this;
	}
	void operator+=(my_string const& obj)
	{
		char s[50];
		strcpy(s,p);
		delete[]p;
		p=new char[sizeof(s)+sizeof(obj.p)+1];
		strcat(s,obj.p);
		strcpy(p,s);
	}
	int length()
	{
		return strlen(p);
	}
	char operator[](int i)
	{
		return p[i];
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
	//cout<<"str="<<str<<endl;
	//str="Hello hai";
	//cout<<"str="<<str<<endl;
	//cout<<"enter string"<<endl;
	//cin>>str;
	//cout<<"str="<<str<<endl;
	//my_string str2;
	//str2="aa";
	//cout<<"str2="<<str2<<endl;
	//cout<<"enter the string"<<endl;
	//my_getline(cin,str2);
	//cout<<"str="<<str2<<endl;
	my_string str3;
	str3="sarvan";
	cout<<"str3="<<str3<<endl;
	/*if(str2==str3)
		cout<<"strings are same"<<endl;
	else
		cout<<"strings are different"<<endl;
*/
	if(str<str3)
		cout<<"str is small"<<endl;
	else
		cout<<"str3 is small"<<endl;
	//str2=str2+str3;
	/*
	str2+=str3;
	cout<<"str2="<<str2<<endl;
	for(int i=0;str2[i];i++)
		cout<<str2[i]<<" ";
	cout<<endl;
	cout<<"str2 length="<<str2.length()<<endl;
	cout<<"sizeof str2="<<sizeof(str2)<<endl;
	cout<<endl;
*/
}
