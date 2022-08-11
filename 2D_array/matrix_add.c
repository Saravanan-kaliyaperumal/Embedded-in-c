#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r,c;
	printf("Enter the no of rows:\n");
	scanf("%d",&r);
	printf("Enter the no of columns:\n");
	scanf("%d",&c);
	printf("enter the first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf(\n"enter the second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nAddition of two matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
}
