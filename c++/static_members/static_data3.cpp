#include<iostream>
using namespace std;
class A
{
        public:
                int z;
                A():z(10)
        {
                cout<<"constructor"<<endl;
        }
};
//int A::z=15;
int main()
{
        A obj;
        cout<<"obj.z="<<obj.z<<endl;
        //cout<<"A::z="<<A::z<<endl;
}

