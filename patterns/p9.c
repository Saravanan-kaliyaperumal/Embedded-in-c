#include<stdio.h>
void main()
{
int num,i,j,k;
printf("enter the number\n");
scanf("%d",&num);
printf("\n");
for(i=1;i<=num;i++)
{
	if(i%2==0)
		k=2;
	else
		k=1;
	for(j=1;j<=i;j++)
	{
		printf("%d ",k);
		k=k+2;
	}
	printf("\n");
}
}
