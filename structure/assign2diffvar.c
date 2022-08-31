#include<stdio.h>
struct st1
{
	int x;
	int y;
};
struct st2
{
	int a;
	int b;
};
int main()
{
	struct st1 v1;
	struct st2 v2={10,20};
	v1=v2;//invalid
}
