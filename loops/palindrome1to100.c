#include<stdio.h>
void main()
{
int temp,num,rem,rev;
for(num=1;num<=1000;num++)
{
rev=0;
temp=num;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp/=10;
}
if(num==rev)
        printf("%d ",num);
	}
	}


