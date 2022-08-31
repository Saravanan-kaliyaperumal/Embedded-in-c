#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i=0;
printf("enter the no of terms:\n");
scanf("%d",&n);
while(i++<n)
{
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
}
printf("\n");
}

