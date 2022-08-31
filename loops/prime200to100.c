#include<stdio.h>
#include<math.h>
void main()
{
int num,i,sq;
for(num=200;num>100;num--)
{
sq=sqrt(num);
for(i=2;i<=sq;i++)
{
if(num%i==0)
        break;
}
if(i==sq+1)
printf("%d ",num);
}
printf("\n");
}

