#include<stdio.h>
void main()
{
        int a[]={10,20,22,30,40,55,26,40,58,69,58,40,69};
        int i,j,n,c;
        n=sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
                printf("%d ",a[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<i;j++)
                {
                        if(a[i]==a[j])
                                break;
                }
                if(j==i)
                {
                        for(j=i+1,c=1;j<n;j++)
                                if(a[i]==a[j])
                                        c++;
		if(c==1)
			printf("%d = %d times\n",a[i],c);
		}
	}
}
