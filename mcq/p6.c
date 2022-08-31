#include<stdio.h>
void main()
{
	int a[]={6,2,8,4,9},*p,n;
	p=a+2;
	n=*p;
	printf("n=%d\n",n);
	n=*++p;
	printf("n=%d\n",n);
	n=*(--p);
	printf("n=%d\n",n);
	n=*p--;
	printf("n=%d\n",n);
	n=(*p)++;
	printf("n=%d\n",n);
	n=++(*p);
	printf("n=%d\n",n);
	n=--*p;
	printf("n=%d\n",n);
	n=*(++p);
	printf("n=%d\n",n);
}
