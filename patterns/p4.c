#include<stdio.h>
void main()
{
int num,i,j;
char ch;
printf("enter the number\n");
scanf("%d",&num);
printf("\n");
for(i=0;i<num;i++)
{
	ch='A';
	for(j=0;j<i+1;j++)
	{
		printf("%c ",ch);
		ch++;
	}
	printf("\n");
}
}

