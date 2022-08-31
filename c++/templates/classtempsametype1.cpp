#include<iostream>
using namespace std;
template<class type>
class A
{
	public:
		type x,y;
		A(type,type);
		void print();
};
template<class type>
A<type>::A(type a,type b):x(a),y(b)
{
	cout<<"constructor"<<endl;
}
template<class type>
void A<type>::print()
{
	cout<<"x="<<x<<" y="<<y<<endl;
}
int main()
{
	A<int>obj1(10,20);
	A<char>obj2('A','B');
	A<float>obj3(22.7,4.5);
	obj1.print();
	obj2.print();
	obj3.print();
}
