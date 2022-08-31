#include<stdio.h>
struct st;
{
	int x;
	char ch;
};
int main()
{
	struct st *p={10,'A'};
	printf("%d %c\n",p->x,p->ch);
}

