#include<stdio.h>
struct st
{
	int x;
	int *p;
};
int main()
{
	struct st v={10,&v.x};
	printf("&v.x=%p\n",&v.x);
	printf("v.x=%d,v.p=%p\n",v.x,v.p);
	printf("*v.p=%d\n",*v.p);
}
