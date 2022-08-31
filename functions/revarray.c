#include<stdio.h>
void rev(int*,int);
void main()
{
        int a[5]={10,20,30,40,50};
        int i,j,n,temp;
        n=sizeof a/sizeof a[0];
	rev(a,n);
}
void rev(int *p,int n)
{
	int i,j,temp;
        for(i=0,j=n-1;i<j;i++,j--)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
        }
        for(i=0;i<n;i++)
                printf("%d ",*p++);
        printf("\n");
}

