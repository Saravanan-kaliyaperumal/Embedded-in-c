#include<stdio.h>
void main()
{
int temp,num,rem,rev=0;
printf("enter the number to check\n");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
if(rev==temp)
	printf("palindrome number\n");
else
	printf("not a palindrome\n");
}
