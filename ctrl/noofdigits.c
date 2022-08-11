#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter the number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		c++;
	}
printf("no of digits:%d\n",c);
}
