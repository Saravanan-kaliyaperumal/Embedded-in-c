#include<iostream>
using namespace std;
void fun(void)
{
        int op;
        cout<<"enter the option 1)int 2)char 3)float 4)string"<<endl;
        cin>>op;
        switch(op)
        {
                case 1:throw 10;break;
                case 2:throw'S';break;
                case 3:throw 22.7;break;
                case 4:throw "Sarvan Sowmiya";break;
                default:cout<<"invalid option\n";
        }
}
int main()
{
        try
        {
                fun();
        }
        catch(const char* p)
        {
                cout<<"p="<<p<<endl;
	}
	catch(...)
	{
		cout<<"default catch block"<<endl;
	}
}

