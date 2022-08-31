#include<iostream>
using namespace std;
template<class type>
class A
{
	public:
		type x,y;
		A(type a,type b):x(a),y(b)
	{
		cout<<"constructor"<<endl;
	}
		void print()
		{
			cout<<"x="<<x<<" y="<<y<<endl;
		}
};
int main()
{
	A<int>obj1(10,20);
	A<char>obj2('A','B');
	A<float>obj3(22.7,4.5);
	obj1.print();
	obj2.print();
	obj3.print();
}

