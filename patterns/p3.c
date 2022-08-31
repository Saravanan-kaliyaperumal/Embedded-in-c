#include<stdio.h>
void main()
{
	int num,i,j;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<i+1;j++)
			printf("*");
printf("\n");
	}
}
