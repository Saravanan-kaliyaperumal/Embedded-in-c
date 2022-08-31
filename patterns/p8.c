#include<stdio.h>
void main()
{
	int num,i,j,k;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k=k+num-j;
		}
		printf("\n");
	}
}
