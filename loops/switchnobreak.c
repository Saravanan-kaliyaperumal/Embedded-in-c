#include<stdio.h>
void main()
{
int op,x=2,y=3;
printf("enter the option\n");
scanf("%d",&op);
switch(op)
{
	case 1:x +=y;
	case 2:x *=y;
	case 3:x -=y;
	default:x -=2;
}
printf("x=%d,y=%d",x,y);
}

