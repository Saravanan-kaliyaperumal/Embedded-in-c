#include<stdio.h>
#include<math.h>
void main()
{
int num, i,sq;
printf("Enter the number to check\n");
scanf("%d",&num);
sq=sqrt(num);
for(i=2;i<=sq;i++)
{
       if(num%i==0)
        break;
}
if(i==sq+1)
        printf("%d is prime number\n",num);
        else
        printf("%d is not a primr number\n",num);
}

