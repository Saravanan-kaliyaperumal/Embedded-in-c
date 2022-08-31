#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor"<<endl;
			cout<<"size="<<sizeof(wchar_t)<<endl;
		}
		~A()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	A *ptr;
	ptr = new A;
//	delete ptr;
}
