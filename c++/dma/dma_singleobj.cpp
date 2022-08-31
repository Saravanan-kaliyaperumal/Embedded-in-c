#include<iostream>
using namespace std;
int main()
{
	int* s;
	float* m;
	s=new int;
	m=new float;
	*s=4;
	*m=4.4;
	cout<<*s<<endl;
	cout<<*m<<endl;
	delete s;
	delete m;
	return 0;
}
