#include<iostream>
using namespace std;
class A
{
        int x,y;
        public:
        A(){}
        A(int a,int b):x(a),y(b){}
        friend A operator++(A &, int);
        void print();
};
A operator++(A &ob, int)
{
        cout<<"pre increment operator function"<<endl;
        A res;
        res.x=ob.x++;
        res.y=ob.y++;
        return res;
}
void A::print()
{
        cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
        A obj1(10,20),obj2;
        obj2=obj1++;
        cout<<"obj1 data\n";
        obj1.print();
        cout<<"obj2 data\n";
        obj2.print();
}

