#include<stdio.h>
void main()
{
	int i,a[3]={10,20,30};
	a[0]++;
	for(i=0;i<3;i++)
		printf("a[%d]=%d\n",i,a[i]);
	printf("a=%p\n",&a);
}
