#include<stdio.h>
void main()
{
float num;
int i,*p=(int *)&num;
printf("enter the number\n");
scanf("%f",&num);
for(i=31;i>=0;i--)
	printf("%d",*p>>i&1);
printf("\n");
}

