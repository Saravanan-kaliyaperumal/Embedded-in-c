#include<iostream>
#include<cstring>
using namespace std;
class A
{
        char *str;
        public:
        A(const char* p)
        {
                str = new char[strlen(p)+1];
         	strcpy(str,p);
        }
	A(A &ob)
	{
		str = new char[strlen(ob.str)+1];
		strcpy(str,ob.str);
	}
        void modify()
        {
                str[0]='S';
        }
        void print()
        {
                cout<<"str = "<<str<<endl;
        }
};
int main()
{
        A ob1("Vector");
        A ob2=ob1;
        ob1.modify();
        ob1.print();
        ob2.print();
}

