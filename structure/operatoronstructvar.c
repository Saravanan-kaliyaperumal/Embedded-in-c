#include<stdio.h>
struct st
{
	int x;
	int y;
};
int main()
{
	struct st v1={10,20},v2={11,22},v3;
	//v3=v1+v2;//invalid
	v3.x=v1.x+v2.x;
	v3.y=v1.y+v2.y;
	printf("%d %d\n",v3.x,v3.y);
}

