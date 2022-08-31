#include<stdio.h>
int perfect(int);
void main()
{
	int num,sum;
	printf("enter the number\n");
	scanf("%d",&num);
	sum=perfect(num);
	if(sum==num)
		printf("Perfect number\n");
	else
		printf("Not a perfect number\n");
}
int perfect(int num)
{
	int i=1,sum=0;
	while(i<num)
	{
		if(num%i==0)
			sum=sum+i;
		i++;
	}
	return sum;
}
