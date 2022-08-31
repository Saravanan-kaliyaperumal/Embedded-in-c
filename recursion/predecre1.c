#include<stdio.h>
void fun(int);
void main()
{
        printf("In main(),Before fun()\n");
        fun(3);
        printf("\nIn main(),After fun()\n");
}
void fun(int n)
{
        if(n>0)
        {
	fun(--n);
        printf("%d ",n);
        }
	printf("\nHello...");
}

