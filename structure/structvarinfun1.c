#include<stdio.h>
void fun();
struct st
       {
                int x;
                char ch;
        };
int main()
{
        fun();
}
void fun()
{
        struct st v={10,'A'};//Here structure memebers are globally declared// valid
	printf("%d %c\n",v.x,v.ch);
}

