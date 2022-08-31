#include<stdio.h>
void rev(int*,int,int,int);
void main()
{
        int a[5]={10,20,30,40,50};
        int i,j,n,temp;
        n=sizeof a/sizeof a[0];
        rev(a,n,0,n-1);
	printf("\n");
}
void rev(int *p,int n,int i,int j)
{
        int temp;
        if(i<j)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
		i++;
		j--;
		rev(p,n,i,j);
        }
	else
        for(i=0;i<n;i++)
                printf("%d ",*p++);
}

