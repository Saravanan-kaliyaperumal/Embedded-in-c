#include<stdio.h>
void main()
{
	int x=10;
	int *p=&x;
	int **ptr=&p;
	printf("x=%d,*p=%d,**ptr=%d\n",x,*p,**ptr);
	printf("&x=%p,p=%p,*ptr=%p\n",&x,p,*ptr);
	printf("&p=%p,ptr=%p\n",&p,ptr);
	printf("&ptr=%p\n",&ptr);
}

