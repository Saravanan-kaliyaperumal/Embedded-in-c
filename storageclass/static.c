#include<stdio.h>
void fun();
void main()
{
        fun();
        fun();
        fun();
}
void fun()
{
        static int x=10;
        printf("x=%d\n",x);
        x++;
}

