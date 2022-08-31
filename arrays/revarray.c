#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int i,j,n,temp;
	n=sizeof a/sizeof a[0];
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
