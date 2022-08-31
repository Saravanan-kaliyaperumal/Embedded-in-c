#include<stdio.h>
struct st
{
        int x;
        int *p;
};
int main()
{
        struct st v={10,&v.x};
	struct st* p=&v;
        printf("&v.x=%p\n",&v.x);
        printf("v.x=%d,v.p=%p\n",p->x,p->p);
        printf("*v.p=%d , *v.p=%d\n",*p->p,*((*p).p));
}

