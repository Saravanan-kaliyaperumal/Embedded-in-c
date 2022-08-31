#include<stdio.h>
struct st1
{
	char c[2];
	char ch[2];
};
struct st2
{
	short int x;
	short int y;
};
union u
{
	struct st1 v1;
	struct st2 v2;
}var={12,1,15,1};
int main()
{
	printf("x=%d, y=%d\n",var.v2.x,var.v2.y);
}

