#include<stdio.h>
void main()
{
int a=0,b=1,c,n;
printf("enter the number\n");
scanf("%d",&n);
while(a<=n)
{
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
}
printf("\n");
}
