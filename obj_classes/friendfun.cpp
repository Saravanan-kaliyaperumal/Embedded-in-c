#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
		friend int main();
};
int main()
{
	A  obj;
	cout<<"Enter the objext data"<<endl;
	cin>>obj.x>>obj.y;
	cout<<"printing the object"<<endl;
	cout<<"x="<<obj.x<<" y="<<obj.y<<endl;
}
