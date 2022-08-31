#include<stdio.h>
void main()
{
	register int x;
	printf("enter x value\n");
	scanf("%d",&x);//we cant access register address
	printf("x=%d\n",x);
}
