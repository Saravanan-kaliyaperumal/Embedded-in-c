#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("enter the n value:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("f=%d\n",f);
}
int fact(int n)
{
	if((n==1)||(n==0))
		return 1;
	else
		return n*fact(n-1);
}
