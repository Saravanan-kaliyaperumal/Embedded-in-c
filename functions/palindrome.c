#include<stdio.h>
void palin(int);
void main()
{
	int num;
	palin(num);
}
void palin(int num)
{
	int temp,rem,rev;
	for(num=0;num<100;num++)
	{
		temp=num,rev=0;
		while(temp!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(rev==num)
			printf("%d ",num);
	}
	printf("\n");
}
