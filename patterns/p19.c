#include<stdio.h>
void main()
{
	int i,j,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(j<i)
			printf("%d*",i);
		else
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=num;i>1;i--)
	{
		for(j=2;j<=i;j++)
		{
		if(j<i)
			printf("%d*",i-1);
		else
			printf("%d",i-1);
		}
		printf("\n");
	}

}
