#include<stdio.h>
void main()
{
int num,fact,sum,rem,temp;
for(num=1;num<100000;num++)
{
temp=num,sum=0;
while(temp!=0)
{
        rem=temp%10;
        for(fact=1;rem!=0;rem--)
                fact *=rem;
                sum +=fact;
                temp /=10;
}
if(num==sum)
        printf("%d ",num);
}
printf("\n");
}
