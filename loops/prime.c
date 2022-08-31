#include<stdio.h>
void main()
{
int num, i;
printf("Enter the number to check\n");
scanf("%d",&num);
for(i=2;i<num;i++)
{
       if(num%i==0)
	break;
}
if(i==num)
	printf("%d is prime number\n",num);
	else
	printf("%d is not a prime number\n",num);
}
