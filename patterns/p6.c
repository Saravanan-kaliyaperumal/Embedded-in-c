#include<stdio.h>
void main()
{
	int num,i,j,s;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("\n");
	for(i=0;i<num;i++)
	{
		for(s=0;s<num-i-1;s++)
			printf(" ");
		for(j=0;j<i+1;j++)
			printf("* ");
		printf("\n");
	}
}
