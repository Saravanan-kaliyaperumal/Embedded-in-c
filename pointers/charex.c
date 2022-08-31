#include<stdio.h>
void main()
{
char x='A';
char *p=&x;
printf("&x=%p, p=%p, &p=%p\n",&x,p,&p);
printf("x=%c,*p=%c\n",x,*p);
//x=20;
*p='B';
printf("x=%c,*p=%c\n",x,*p);
}

