#include<stdio.h>
void main()
{
int a[]={10,76,30,40,100,60,70,80,90};
int i,n,big;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n");
big=a[0];
for(i=1;i<n;i++)
{
	if(big<a[i])
		big=a[i];
}
printf("big = %d\n",big);
}

