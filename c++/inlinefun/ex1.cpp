#include<iostream>
using namespace std;
inline int Max(int x,int y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<"Max(10,20):"<<Max(10,20)<<endl;
	cout<<"Max(0,2100):"<<Max(0,2100)<<endl;
	cout<<"Max(44,4):"<<Max(44,4)<<endl;
	return 0;
}
