#include<stdio.h>
void main()
{
	int i,j,s,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(s=i;s<num;s++)
		printf(" ");
	for(j=1;j<(i*2);j++)
		printf("%d",j);
	printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(s=num;s>i;s--)
			printf(" ");
		for(j=1;j<(i*2);j++)
			printf("%d",j);
		printf("\n");
	}
}
