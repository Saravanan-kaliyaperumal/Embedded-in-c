#include<stdio.h>
void main()
{
	int x=10,y=20,z;
	int *p=&x;
	printf("&x=%p, &y=%p, &z=%p, &p=%p\n",&x,&y,&z,&p);
	//z=*p++;
	//z=*++p;
	//z=(*p)++;
	//z=++(*p);
	//z=++*p++;
	z=++(*p)++;
	printf("x=%d, y=%d, z=%d,*p=%d\n",x,y,z,*p);
}

