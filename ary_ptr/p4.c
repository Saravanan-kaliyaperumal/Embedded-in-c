#include<stdio.h>
void main()
{
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int *p[3]={a,a+1,a+2};
	int i;
	printf("a=%p,a+1=%p,a+2=%p\n",a,a+1,a+2);
	for(i=0;i<3;i++)
		printf("%d  %p\n",*p[i],p[i]);
}
