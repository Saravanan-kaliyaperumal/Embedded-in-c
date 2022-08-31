#include<stdio.h>
void main()
{
        int i,j,r,c,n;
//      int a[2][3]={{10,20,30},{11,22,33}};
        int a[][3]={10,20,30,11,22,33};
//      int a[2][]={{10,20,30},{11,22,33}};
        r=sizeof a/sizeof a[0];
	c=sizeof a[0]/sizeof a[0][0];
	n=r*c;
	printf("r=%d,c=%d,n=%d\n",r,c,n);
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        printf("%d ",a[i][j]);
                printf("\n");
        }
}

