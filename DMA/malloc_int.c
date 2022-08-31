#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=(int *)malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("DMA is failed\n");
		return 0;
	}
	printf("Enter the values\n");
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);
	printf("The values are:\n");
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\n");
}

