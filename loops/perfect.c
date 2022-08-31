#include<stdio.h>
void main()
{
int i,num,sum=0;
printf("enter any number\n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
	if(num%i==0)
		sum=sum+i;
}
if(sum==num)
	printf("%d is perfect number\n",num);
	else
	printf("%d is not a perfect number\n",num);
}
