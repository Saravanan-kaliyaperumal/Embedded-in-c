#include<stdio.h>
void main()
{
int i,j,k,num;
printf("enter the number\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
	for(j=1;j<num;j++)
	{
		if(j<=i)
			printf("%d",j);
		else if(j!=0)
			printf(" ");
	}
	for(j=num;j>=1;j--)
	{
		if(j<=i)
			printf("%d",j);
		else
			printf(" ");
	}
	printf("\n ");
}
}


