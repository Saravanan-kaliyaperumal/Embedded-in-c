#include<stdio.h>
void main()
{
	int a[]={3,2,67,0,56};
	int *p;
	p=&a[2];
//	printf("%d %d %d\n",*--p,*--p,*--p);
	printf("%d %d %d\n",--(*p),(*p)++,++(*p));
}

