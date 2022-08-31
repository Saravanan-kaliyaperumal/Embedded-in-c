#include<stdio.h>
void revbits(int,int,int);
void main()
{
int num,i,j,x,y;
printf("enter the number u want to reverse\n");
scanf("%d",&num);
printf("Before reversing the bit\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
revbits(num,31,0);
printf("\n");
}
void revbits(int num,int i,int j)
{
        int x,y;
if(i>j)
{
x=num>>i&1;
y=num>>j&1;
if(x!=y)
{
num = num^(1<<i);
num = num^(1<<j);
}
revbits(num,--i,++j);
}
else
{
printf("After reversing the bit\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
}
}

