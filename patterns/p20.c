#include<stdio.h>
void main()
{
int num,l,i,j;
char ch;
printf("enter the number:\n");
scanf("%d",&num);
for(i=num;i>0;i--)
{
	ch=0;
	for(j=-num;j<=num;j++)
	{
		if(j<=0)
		{
			l=-j;
			ch++;
		}
		else
		{
			l=j;
			ch--;
		}
		if(i<=l)
		printf("%d ",ch);
		else if(j!=0)
			printf(" ");
	}
	printf("\n");
}
}

