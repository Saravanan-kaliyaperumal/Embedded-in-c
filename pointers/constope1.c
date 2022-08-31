#include<stdio.h>
void main()
{
	int x=10,y=20;
	int *const p;
	p=&x;
	*p=15;
	printf("&x=%p,&y=%p, p=%p\n",&x,&y,p);
	printf("x=%d,y=%d,*p=%d",x,y,*p);
}
