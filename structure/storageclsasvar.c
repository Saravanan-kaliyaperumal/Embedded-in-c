#include<stdio.h>
struct st
{
	int x;
	int y;
	int z;
};
int main()
{
	auto struct st v1;//valid
	static struct st v2;
	register struct st v3;
}

