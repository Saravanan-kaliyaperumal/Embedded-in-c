#include<stdio.h>
struct st1
{
	int x;
	struct st2
	{
		int y;
	}v2;
}v1={10,{20}};

/*struct st2
{
	int y;
};
struct st1
{
	int x;
	struct st2 v2;
}v1;*/
int main()
{
	struct st1 v1={10,20};
	printf("%d %d\n",v1.x,v1.v2.y);
}
