#include<stdio.h>
#include<math.h>
int armstrong(int,int);
void main()
{
	int num,arm;
	printf("Enter the number\n");
	scanf("%d",&num);
	arm=armstrong(num,0);
	if(arm==num)
		printf("%d is armstrong number\n",num);
	else
		printf("%d is not armstrong number\n",num);
}
int armstrong(int num,int sum)
{
	int temp,rem;
	temp=num;
	if(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,3);
		temp=temp/10;
		return armstrong(temp,sum);
	}
	else
	return sum;
}
