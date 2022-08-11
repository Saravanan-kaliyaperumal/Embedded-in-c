#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int i,n;
n=sizeof a/sizeof a[0];
for(i=n-1;i>=0;i--)
	printf("%d ",a[i]);
printf("\n");
}

