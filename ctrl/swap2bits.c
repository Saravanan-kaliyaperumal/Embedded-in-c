#include<stdio.h>
void main()
{
int i,num,p1,p2,x,y;
printf("Enter the number\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");
printf("enter the two position u want to swap\n");
scanf("%d%d",&p1,&p2);
x= num>>p1&1;
y= num>>p2&1;
if(x!=y)
{
	num=num^(1<<p1);
	num=num^(1<<p2);
}
for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");
}
