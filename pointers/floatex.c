#include<stdio.h>
void main()
{
float x=22.7;
float *p=&x;
printf("&x=%p, p=%p, &p=%p\n",&x,p,&p);
printf("x=%f,*p=%f\n",x,*p);
//x=20;
*p=44.4;
printf("x=%f,*p=%f\n",x,*p);
}

