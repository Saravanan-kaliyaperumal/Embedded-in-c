#include<iostream>
using namespace std;
int main()
{
	int x= 10;
	//int &r;
//	int &r=10;
//	const int &r=10;
//	int &r=++x;
//	int &r=x++;
//	const int &r=x++;
	const int &r=++x;
	cout<<"x="<<x<<" &x="<<&x<<endl;
	cout<<"r="<<r<<" &r="<<&r<<endl;
}
