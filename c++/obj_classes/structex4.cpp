#include<iostream>
using namespace std;
struct A
{
        protected:
                int x,y;
};
void setdata(struct A &ob)
{
        cout<<"enter the data"<<endl;
        cin>>ob.x>>ob.y;
}
void print(struct A &ob)
{
        cout<<"x="<<ob.x<<endl;
        cout<<"y="<<ob.y<<endl;
}
int main()
{
        A obj;
        setdata(obj);
        print(obj);
}

