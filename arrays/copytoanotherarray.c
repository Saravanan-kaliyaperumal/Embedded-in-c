#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int i,n,b[5];
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
}
