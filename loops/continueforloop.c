#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if((i==2)||(i==5))
			continue;
		printf("%d ",i);
	}
	printf("\n");
	printf("Am not in for loop\n");
}
