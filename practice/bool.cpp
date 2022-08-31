#include<iostream>
using namespace std;
bool process();
int main()
{
	bool accept;
	accept=process();
	if(accept==true)
		cout<<"Accepted\n";
	else
		cout<<"Not accepted\n";
}
bool process()
{
	char answer;
	cout<<"do u want to enter answer(y/n)\n";
	cin>>answer;
	if(answer=='y')
		return 1;
	else
		return 0;
}
