#include<stdio.h>
int rev(int);
void main()
{
        int n,a;
        printf("enter the number\n");
        scanf("%d",&n);
        a=rev(n);
        printf("rev of digits=%d\n",a);
}
int rev(int num)
{
        int r=0;
        while(num!=0)
        {
                r=r*10+(num%10);
                num /=10;
        }
        return r;
}

