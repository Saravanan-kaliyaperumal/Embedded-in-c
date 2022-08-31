#include<stdio.h>
void main()
{
	int a[5]={1,3,4,5,6};
	int i,j;
	int n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			break;
		}
		if(j==a[i])
			printf("%d ",j);
	
	}
	printf("\n");
}

