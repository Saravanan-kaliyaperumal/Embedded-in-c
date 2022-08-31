#include<stdio.h>
int sum(int);
void main()
{
	int n,a;
	printf("enter the number\n");
	scanf("%d",&n);
	a=sum(n);
	printf("sum of digits=%d\n",a);
}
int sum(int num)
{
	int s=0;
	while(num!=0)
	{
		s +=(num%10);
		num /=10;
	}
	return s;
}


