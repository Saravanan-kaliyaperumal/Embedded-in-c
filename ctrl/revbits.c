#include<stdio.h>
void main()
{
int num,i,j,x,y;
printf("enter the number u want to reverse\n");
scanf("%d",&num);
printf("Before reversing the bit\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
for(i=31,j=0;i>j;i--,j++)
{
x=num>>i&1;
y=num>>j&1;
if(x!=y)
{
num = num^(1<<i);
num = num^(1<<j);
}
}
printf("After reversing the bit\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
