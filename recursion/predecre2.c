#include<stdio.h>
void fun(int);
void main()
{
        fun(3);
}
void fun(int n)
{
        if(n>0)
        {
        fun(--n);
        printf("%d ",n);
	fun(--n);
        }
}

