#include<stdio.h>
void main()
{
float num;
printf("enter the number\n");
scanf("%f",&num);
char i,j,*p=(char *)&num;
p=p+3;
for(i=0;i<4;i++)
{
	for(j=7;j>=0;j--)
		printf("%d",*p>>j&1);
p--;
}
printf("\n");
}
