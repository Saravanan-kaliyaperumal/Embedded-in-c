#include<stdio.h>
void main()
{
int a[]={10,76,30,40,100,60,70,80,90};
int i,n,big1,big2;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n");
for(i=1;i<n;i++)
{
        if(a[0]!=a[i])
		break;
}
if(a[0]>a[i])
	big1=a[0],big2=a[i];
	else
	big2=a[0],big1=a[i];
	for(;i<n;i++)
{
	if(big1<a[i])
	{
		big2=big1;
		big1=a[i];
	}
	else if((big2<a[i])&&(big1!=a[i]))
		big2=a[i];
}
printf("big1 = %d, big2=%d\n",big1,big2);
}
