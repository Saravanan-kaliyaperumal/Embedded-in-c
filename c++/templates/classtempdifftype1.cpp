#include<iostream>
using namespace std;
template<class type1,class type2>
class A
{
        public:
                type1 x;
		type2 y;

                A(type1,type2);
                void print();
};
template<class type1,class type2>
A<type1,type2>::A(type1 a,type2 b):x(a),y(b)
{
        cout<<"constructor"<<endl;
}
template<class type1,class type2>
void A<type1,type2>::print()
{
        cout<<"x="<<x<<" y="<<y<<endl;
}
int main()
{
        A<int,char>obj1(10,'A');
        A<char,float>obj2('B',22.7);
        A<float,int>obj3(4.5,20);
        obj1.print();
        obj2.print();
        obj3.print();
}

