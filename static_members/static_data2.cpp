#include<iostream>
using namespace std;
class A
{
        public:
                static int z;
                A()
        {
                cout<<"constructor"<<endl;
		z=10;
        }
};
int A::z=15;
int main()
{
        A obj;
	cout<<"obj.z="<<obj.z<<endl;
	cout<<"A::z="<<A::z<<endl;
}

