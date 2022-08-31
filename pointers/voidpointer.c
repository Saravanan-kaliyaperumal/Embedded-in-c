#include<stdio.h>
void main()
{
char ch='A';
int x=10;
float f=22.7;
void *p;
p=&ch;
printf("&ch=%p, p=%p\n",&ch,p);
printf("ch=%c,*p=%c\n",ch,*(char *)p);
p=&x;
printf("&x=%p, p=%p\n",&x,p);
printf("x=%d,*p=%d\n",x,*(int *)p);
p=&f;
printf("&f=%p, p=%p\n",&f,p);
printf("f=%f,*p=%f\n",f,*(float *)p);
}

