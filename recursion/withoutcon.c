#include<stdio.h>
void fun();
void main()
{
	int x=10;
	printf("before fun()\n");
	fun();
	printf("after fun()\n");
	printf("x=%d\n",x);
}
void fun()
{
	int y=20;
	printf("In fun(),y=%d\n",y);
	fun();
}
