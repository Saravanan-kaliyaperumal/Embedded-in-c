#include<stdio.h>
union U
{
	int x;
	int y;
};
int main()
{
	//union u v={10,20};
	union U v={10};
	printf("v.x=%d,v.y=%d\n",v.x,v.y);
	v.y=20;
	printf("v.x=%d,v.y=%d\n",v.x,v.y);

}
