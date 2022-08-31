#include<stdio.h>
void main()
{
int num,rev=0,rem;
printf("enter the number u want to reverse\n");
scanf("%d",&num);
while(num!=0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
printf("reverese of the given number is %d\n",rev);
}
