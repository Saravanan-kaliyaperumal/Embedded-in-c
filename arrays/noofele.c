#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50};
int i,n;
n=sizeof a/sizeof a[0];
printf("no of elements:%d\n",n);
for(i=0;i<n;i++)
	printf("%d %p\n",a[i],&a[i]);

}

