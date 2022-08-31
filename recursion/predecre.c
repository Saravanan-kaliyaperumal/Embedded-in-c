#include<stdio.h>
void fun(int);
void main()
{
        printf("In main(),Before fun()\n");
        fun(3);
	printf("In main(),After fun()\n");
}
void fun(int n)
{
        if(n>0)
        {
        printf("In fun(),n=%d\n",n);
        fun(--n);
        }
}

