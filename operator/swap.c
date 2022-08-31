#include<stdio.h>
void main()
{
int x=10,y=5;
printf("Before swapping: x=%d , y=%d\n",x,y);
//x=x+y;
//y=x-y;
//x=x-y;
//x=x*y;
//y=x/y;
//x=x/y;
//x=x^y;
//y=x^y;
//x=x^y;
//x=x+y-(y=x);
//x=x*y/(y=x);
x^=y^=x^=y;
printf("After swapping: x=%d , y=%d\n",x,y);
}

