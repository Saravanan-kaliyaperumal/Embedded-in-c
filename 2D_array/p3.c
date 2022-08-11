#include<stdio.h>
void main()
{
        int i,j,r,c,n;
        int a[][3]={10,20,30,11,22,33};
	printf("sizeof a=%d\n",sizeof a);
	printf("sizeof a[0]=%d\n",sizeof a[0]);
	printf("sizeof a[0][0]=%d\n",sizeof a[0][0]);
	printf("&a=%p\n",&a);
	printf("&a+1=%p\n",&a+1);
	printf("a=%p\n",a);
	printf("a+1=%p\n",(a+1));
	printf("a[0]=%p\n",a[0]);
	printf("a[0]+1=%p\n",(a[0]+1));
	printf("a[0][0]=%d\n",a[0][0]);
	printf("a[0][0]+1=%d\n",a[0][0]+1);
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

