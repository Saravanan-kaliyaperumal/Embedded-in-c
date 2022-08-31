#include<iostream>
using namespace std;
template <class type1,typename type2>
void sort(type1*,type2);
int main()
{	
	int n1,n2,n3;
	int a[]={50,40,30,20,10};
	char c[]={'Z','Y','X','W','V','U'};
	float f[]={5.5,4.4,3.3,2.2,1.1};
	n1=sizeof a/sizeof a[0];
	n2=sizeof c/sizeof c[0];
	n3=sizeof f/sizeof f[0];
	sort(a,n1);
	sort(c,n2);
	sort(f,n3);
}
template<class type1,typename type2>
void sort(type1* array, type2 num)
{
	type1 temp;
	type2 i,j;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if(array[j]>array[j+1])
				{
					temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
		}			
	}
	cout<<"After sort= "<<endl;
	for(i=0;i<num;i++)
		cout<<array[i]<<" ";
		cout<<endl;
}

