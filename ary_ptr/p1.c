#include<stdio.h>
void main()
{
	int x=10,y=20,z=30;
	int *a[3]={&x,&y,&z};
	printf("&x=%p,&y=%p,&z=%p\n",&x,&y,&z);
	printf("a[0]=%p,a[1]=%p,a[2]=%p\n",a[0],a[1],a[2]);
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	printf("*a[0]=%d,*a[1]=%d,*a[2]=%d\n",*a[0],*a[1],*a[2]);
}
