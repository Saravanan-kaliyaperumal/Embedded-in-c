#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
F:
	printf("enter the n value\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Invalid number\n");
		goto F;
	}
	f=fact(n);
	printf("f=%d\n",f);
}
int fact(int n)
{
	int fact =1;
	while(n!=0)
	{
		fact *=n;
		n--;
	}
	return fact;
}
