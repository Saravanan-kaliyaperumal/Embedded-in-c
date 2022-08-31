#include<stdio.h>
void fibo(int);
int main ()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	fibo(n);
	printf("\n");
}
void fibo(int n)
{
	int a=0,b=1,c;
	while(a<=n)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
