#include<stdio.h>
void main()
{
	static int x=10;
	static int y=x;//we cant initialize static variable with another variable
	printf("y=%d\n",y);
}
