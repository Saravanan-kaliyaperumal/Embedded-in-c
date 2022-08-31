#include<stdio.h>
void main()
{
int x=10;
int *p=&x;
printf("&x=%p, p=%p, &p=%p\n",&x,p,&p);
printf("x=%d,*p=%d\n",x,*p);
//x=20;
*p=20;
printf("x=%d,*p=%d\n",x,*p);
}

