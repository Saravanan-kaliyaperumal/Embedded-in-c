#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	friend istream& operator>>(istream &in, A &ob);
	friend ostream& operator<<(ostream &out, A &ob);
};
istream& operator>>(istream &in, A &ob)
{
	in>>ob.x>>ob.y;
	return in;
}
ostream& operator<<(ostream &out, A &ob)
{
	out<<"x="<<ob.x<<"y="<<ob.y<<endl;
	return out;
}
int main()
{
	A obj;
	cout<<"enter obj data\n";
	cin>>obj;
	cout<<obj;
}
