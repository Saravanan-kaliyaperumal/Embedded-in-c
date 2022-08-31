#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5,6,4,3,2,4,4,6,8};
	int i,c=0,ele,n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("enter the element\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
			c++;
	}
	printf("no of times the element is present:%d\n",c);
}
