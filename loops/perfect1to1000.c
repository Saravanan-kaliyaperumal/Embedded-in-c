#include<stdio.h>
void main()
{
int i,num,sum;
for(num=1;num<1000;num++)
{
	sum=0;
for(i=1;i<num;i++)
{
        if(num%i==0)
                sum=sum+i;
}
if(sum==num)
        printf("%d ",num);
	}
printf("\n");
	}


