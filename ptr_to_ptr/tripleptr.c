#include<stdio.h>
void main()
{
	int x=10;
	int *p=&x;
	int **q=&p;
	int ***r=&q;
	printf("%d %d %d %d\n",x,*p,**q,***r);
	printf("%p %p %p %p\n",&x,p,*q,**r);
	printf("%p %p %p\n",&p,q,*r);
	printf("%p %p\n",&q,r);
	printf("%p\n",&r);
}
