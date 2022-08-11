#include<iostream>
#include<stdio.h>
#include<stdio_ext.h>
using namespace std;
int main()
{
	string str;
	cout<<"enter the string"<<endl;
	cin>>str;
	cout<<"str= "<<str<<endl;
	cout<<"enter the string"<<endl;
	__fpurge(stdin);
	getline(cin,str);
	cout<<"str = "<<str<<endl;
}

