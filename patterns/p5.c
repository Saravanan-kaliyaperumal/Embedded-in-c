#include<stdio.h>
void main()
{
int num,i,j;
printf("enter the number\n");
scanf("%d",&num);
printf("\n");
for(i=1;i<=num;i++)
{
	for(j=1;j<=i;j++)
		printf("%d",j%2);
	printf("\n");
}
}
