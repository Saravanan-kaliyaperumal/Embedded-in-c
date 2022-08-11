#include<stdio.h>
int sum(void);
void main()
{
int s=sum();
printf("sum = %d\n",s);
}
int sum()
{
        int a,b,sum=0;
	printf("Enter a&b:\n");
	scanf("%d%d",&a,&b);
        sum=a+b;
        return sum;
}
