#include<stdio.h>
struct st
{
	int x;
	char ch;
};
void fun(struct st);
int main()
{
	struct st v={10,'A'};
	fun(v);
}
void fun(struct st v)
{
	printf("In fun(),%d %c\n",v.x,v.ch);
}
