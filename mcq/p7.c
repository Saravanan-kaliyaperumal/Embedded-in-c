#include<stdio.h>
void main()
{
	int a=10,b=2,c;
	a=!(c=c==c)&&++b;
	c+=(a+b--);
	printf("%d%d%d\n",b,c,a);
}
