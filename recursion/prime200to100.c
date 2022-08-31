#include<stdio.h>
#include<math.h>
void prime(int,int);
void main()
{
	int num=200;
	prime(num,2);
	printf("\n");
}
void prime(int num, int i)
{
	int sq;
	sq=sqrt(num);
		if(num>100)
		{	
		while(i<=sq)
		{
			if(num%i==0)
				break;
			else
				i++;
		}
if(i==sq+1)
	printf("%d ",num);
	prime(--num,2);
}
}

