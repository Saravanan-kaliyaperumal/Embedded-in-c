#include<stdio.h>
void fibo(int,int,int);
int main ()
{
        int n;
        printf("enter the number:\n");
        scanf("%d",&n);
        fibo(n,0,1);
        printf("\n");
}
void fibo(int n,int a,int b)
{
        int c;
        if(a<=n)
        {
                printf("%d ",a);
		fibo(n,b,a+b);
        }
}

