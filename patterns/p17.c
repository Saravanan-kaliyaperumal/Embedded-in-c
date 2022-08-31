#include<stdio.h>
void main()
{
	int num,i,j,s,k;
	printf("enter the number of lines\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		k=1;
		for(s=0;s<=num-i-1;s++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k*(i-j)/j;
		}
		printf("\n");
	}
}
