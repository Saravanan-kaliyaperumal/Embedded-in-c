#include<stdio.h>
struct st
{
	int x;
	char ch;
};
void scan(struct st*);
void print(struct st);
int main()
{
	struct st v;
	scan(&v);
	print(v);
}
void scan(struct st *p)
{
	printf("enter the data 1.int 2.char\n");
	scanf("%d %c",&p->x,&p->ch);
}
void print(struct st v)
{
	struct st *p=&v;
	printf("v.x=%d, v.ch=%c\n",(*p).x,(*p).ch);
}

