#include<stdio.h>
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	num&(num-1)?puts("not a pow of 2"):puts("power of 2");
}
