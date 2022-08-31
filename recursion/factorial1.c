#include<stdio.h>
int fact(int,int);
void main()
{
        int n,f;
F:
        printf("enter the n value\n");
        scanf("%d",&n);
        if(n<0)
        {
                printf("Invalid number\n");
                goto F;
        }
        f=fact(n,1);
        printf("f=%d\n",f);
}
int fact(int n,int f)
{
        if(n!=0)
	return fact(n-1,f*n);
	else
        return f;
}

