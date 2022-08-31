#include<stdio.h>
void main()
{
int num,fact,sum=0,rem,temp;
printf("enter the number u want to check\n");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
	rem=temp%10;
	for(fact=1;rem!=0;rem--)
		fact *=rem;
		sum +=fact;
		temp /=10;
}
if(num==sum)
	printf("strong number\n");
	else
	printf("Not a strong number\n");
}
