#include<stdio.h>
union U
{
        int x;
        char c;
};
int main()
{
        //union u v={10,20};
        union U v={256};
        printf("v.x=%d,v.c=%d\n",v.x,v.c);
        v.c=1;
        printf("v.x=%d,v.c=%d\n",v.x,v.c);
}

