#include<stdio.h>
void reverse(int *);
void main()
{
        int x,i;
        printf("enter the number:\n");
        scanf("%d",&x);
        reverse(&x);
        printf("In main(), After reverse\n");
        for(i=31;i>=0;i--)
                printf("%d",x>>i&1);
        printf("\n");
}
void reverse(int *p)
{
        int i,j,a,b;
        for(i=31;i>=0;i--)
        printf("%d",*p>>i&1);
        printf("\n");
        for(i=31,j=0;i>j;i--,j++)
        {
                a=*p>>i&1;
                b=*p>>j&1;
                if(a!=b)
                {
                        *p=*p^(1<<i);
                        *p=*p^(1<<j);
                }
        }
        printf(" In fun(), After reverse\n");
        for(i=31;i>=0;i--)
                printf("%d",*p>>i&1);
        printf("\n");
}

