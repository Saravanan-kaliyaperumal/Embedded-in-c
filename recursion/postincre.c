#include<stdio.h>
void fun();
void main()
{
        printf("In main()...\n");
        fun();
}
void fun()
{
        int i=0;
	if(i++<3)
	{
        printf("In fun(),i=%d\n",i);
        fun();
	}
}

