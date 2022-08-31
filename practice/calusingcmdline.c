#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Usage:./a.out x y op\n");
		return 0;
	}
	int x,y,z,op;
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	switch(argv[3][0])
	{
		case '+':z=x+y;
			 break;
		case '-':z=x-y;
			 break;
		case '*':z=x*y;
			 break;
		case '/':z=x/y;
			 break;
	        case '%':z=x%y;
			 break;
		default:printf("Invalid operation\n");
			return 0;
	}
	printf("z=%d\n",z);
}

