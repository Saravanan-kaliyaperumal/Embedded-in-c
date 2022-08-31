#include<stdio.h>
void fun();
void main()
{
	fun();
	fun();
	fun();
}
void fun()
{
	auto int x=10;
	printf("x=%d\n",x);
	x++;
}
