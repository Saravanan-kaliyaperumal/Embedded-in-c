#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
	int x=10,y=20;
	cout<<"before swapping x="<<x<<" y="<<y<<endl;
	swap(&x,&y);
	cout<<"After swapping x="<<x<<" y="<<y<<endl;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}


