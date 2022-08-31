#include<stdio.h>
void main()
{
	int num,i,j,s,l;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("\n");
	for(i=-num;i<=num;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(s=0;s<l;s++)
			printf(" ");
		for(j=0;j<(num-l)+1;j++)
			printf("* ");
		printf("\n");
	}
}


