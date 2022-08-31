#include<stdio.h>
void main()
{
	int num,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
printf("sum of digits is %d\n",sum);
}
