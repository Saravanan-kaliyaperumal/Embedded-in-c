#include<stdio.h>
void main()
{
        char op;
        int x,y,z;
        printf("enter the x, y values\n");
        scanf("%d%d",&x,&y);
        printf("enter the which operation u want to perform '+', '-', '*', '/', '%%'\n");
        scanf(" %c",&op);
	switch(op)
	{
		case '+':
			z=x+y;
			printf("%d %c %d = %d\n",x,op,y,z);
			break;
		case '_':
			z=x-y;
			printf("%d %c %d = %d\n",x,op,y,z);
			break;
		case '*':
			z=x*y;
			printf("%d %c %d = %d\n",x,op,y,z);
			break;
		case '/':
			z=x/y;
			printf("%d %c %d = %d\n",x,op,y,z);
			break;
		case '%':
			z=x%y;
			printf("%d %c %d = %d\n",x,op,y,z);
			break;
		default:
	
			printf("Invalid option\n");
	}
}

