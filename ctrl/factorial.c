#include<stdio.h>
void main()
{
	int num,temp,fact=1;
F:
	printf("enter the value\n");
	scanf("%d",&num);
	temp=num;
	if(temp<0)
	{
	printf("Invalid number for factorial\n");
	goto F;
	}
	while(temp!=0)
	{
		fact*=temp;
		temp--;
	}
printf("factorial of %d = %d\n",num,fact);
}
