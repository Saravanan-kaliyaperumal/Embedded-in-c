#include<stdio.h>
void fun(int);
void main()
{
        printf("In main()...\n");
        fun(0);
}
void fun(int i)
{
        if(i++<3)
        {
        printf("In fun(),i=%d\n",i);
        fun(i);
        }
}

