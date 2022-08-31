#include<stdio.h>
typedef int FUN_DECLARE(int,int);
FUN_DECLARE sum,sub,mul,div;
int main()
{
	int a,b,c,op;
	printf("enter the a,b values\n");
	scanf("%d %d",&a,&b);
	printf("Enter the option: 1-sum, 2-sub, 3-mul, 4-div\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:c=sum(a,b);break;
		case 2:c=sub(a,b);break;
		case 3:c=mul(a,b);break;
		case 4:c=div(a,b);break;
		default:printf("Invalid option\n");
	}
	printf("c=%d\n",c);
}
int sum(int x,int y)
{
	printf("sum fun...\n");
	return x+y;
}
int sub(int x,int y)
{
	printf("sub fun..\n");
	return x-y;
}
int mul(int x,int y)
{
	printf("mul fun..\n");
	return x*y;
}
int div(int x,int y)
{
	printf("div fun..\n");
	return x/y;
}
