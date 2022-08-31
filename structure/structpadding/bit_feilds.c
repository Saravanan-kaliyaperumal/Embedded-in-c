#include<stdio.h>
struct st
{
	int x:8;
	int y:5;
};
int main()
{
	struct st v={10,100};
	printf("size:%ld\n",sizeof(v));
	printf("%d %d\n",v.x,v.y);
}
