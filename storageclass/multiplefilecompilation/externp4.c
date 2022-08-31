int x=10;
#include<stdio.h>
void fun()
{
	extern int x;
	printf("fun(), x=%d\n",x);
}
