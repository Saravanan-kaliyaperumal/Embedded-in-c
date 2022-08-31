#include<stdio.h>
struct st
{
	int x;
	int y;
};
int main()
{
	struct st v1,v2={10,20};
	v1=v2;//valid
}
