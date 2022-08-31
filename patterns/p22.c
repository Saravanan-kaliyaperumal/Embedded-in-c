#include<stdio.h>
void main()
{
	int num,i,j,s;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(s=i*2;s<num*2;s++)
			printf(" ");
		
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}

}
