#include<stdio.h>
int main()
{
	int l,n,i,j,s;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		char ch=64;
		for(j=-n;j<=n;j++)
		{
			if(-i<j&&j<i)
				printf("  ");
			else if(j<=0)
				printf("%c ",++ch);
			else if(i==0&&j==1)
				printf("%c ",--ch);
			else 
				printf("%c ",ch--);
		}
		printf("\n");
	}
}
