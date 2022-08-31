#include<stdio.h>
void main()
{
	//int a[]={10,20,30,40,50,40,30,20,10};
	int a[]={10,20,30,40,50,55,40,30,20,10};
	int i,j,n;
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
			break;
	}
	if(i<j)
		printf("Not a palindrome array\n");
	else
		printf("Palindrome array\n");
}
