#include<stdio.h>
void main()
{
	extern int x;
	printf("main(),x=%d\n",x);
	x=30;
	fun();
}
