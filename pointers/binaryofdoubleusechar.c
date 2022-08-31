#include<stdio.h>
void main()
{
	double num;
	printf("enter the double number\n");
	scanf("%lf",&num);
	char i,j,*p=(char *)&num;
	p=p+7;
	for(i=0;i<8;i++)
	{
		for(j=7;j>=0;j--)
			printf("%d",*p>>j&1);
		p--;
	}
	printf("\n");
}
