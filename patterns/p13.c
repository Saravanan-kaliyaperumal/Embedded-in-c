#include<stdio.h>
void main()
{
        int num,i,j,s,l,k;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("\n");
        for(i=-num;i<=num;i++)
        {
		k=1;
                if(i<0)
                        l=-i;
                else
                        l=i;
                for(s=num;s>l;s--)
                        printf(" ");
                for(j=0;j<(l+1);j++)
                        printf("%d ",k++);
                printf("\n");
        }
}

