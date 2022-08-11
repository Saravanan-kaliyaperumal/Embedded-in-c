#include<stdio.h>
void main()
{
int x,y,i=1;
printf("enter the x value:\n");
scanf("%d",&x);
M:
y=x*i;
printf("%d*%d=%d\n",x,i,y);
i++;
if(i<=10)
goto M;
}

