#include<iostream>
using namespace std;
int main()
{
        char str[50];
        cout<<"enter the string"<<endl;
//        cin>>str;
        cin.getline(str,sizeof(str));
        cout<<"str = "<<str<<endl;
}

