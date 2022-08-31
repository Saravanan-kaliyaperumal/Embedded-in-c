#include<stdio.h>
int rev(int,int);
void main()
{
        int n,a;
        printf("enter the number\n");
        scanf("%d",&n);
        a=rev(n,0);
        printf("rev of digits=%d\n",a);
}
int rev(int num,int r)
{
        if(num!=0)
        {
                r=r*10+(num%10);
                num /=10;
		return rev(num,r);
        }
	else
        	return r;
}

