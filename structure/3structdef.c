#include<stdio.h>
struct st3
{
	int z;
};
struct st2
{
	int y;
	struct st3 v3;
};
struct st1
{
	int x;
	struct st2 v2
}v1={10,{20,{30}}};
int main()
{
	printf("%d %d %d\n",v1.x,v1.v2.y,v1.v2.v3.z);
}

