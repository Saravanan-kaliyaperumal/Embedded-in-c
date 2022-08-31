#include<stdio.h>
int sum(int,int);
void main()
{
        int n,a;
        printf("enter the number\n");
        scanf("%d",&n);
        a=sum(n,0);
        printf("sum of digits=%d\n",a);
}
int sum(int num,int s)
{
        if(num!=0)
       	return sum (num/10,s+(num%10));
        else
        return s;
}

