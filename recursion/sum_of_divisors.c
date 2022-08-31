#include<stdio.h>
int div(int,int,int);
void main()
{
	int num,sum;
	printf("enter the number:\n");
	scanf("%d",&num);
	sum=div(num,0,1);
	printf("sum of divisor = %d\n",sum);
}
int div(int num, int s, int i)
{
	if(i<num)
	{
		if(num%i==0)
			s=s+i;
			i++;
		return div(num,s,i);
	}
		else
		return s;
}
