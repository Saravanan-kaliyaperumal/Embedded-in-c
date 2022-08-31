#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=(int*)malloc(5*sizeof(int));
	printf("p=%p\n",p);
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\n");
	for(i=0;i<5;i++)
		p[i]=i+10;
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\n");
	free (p);
	printf("p=%p\n",p);
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\n");
}
