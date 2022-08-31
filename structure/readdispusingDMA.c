#include<stdio.h>
#include<stdlib.h>
struct st
{
	int x;
	char ch;
};
int main()
{
	struct st* p=(struct st*)malloc(sizeof(struct st));
//	p->x=10;
//	p->ch='A';
	printf("enter x,ch data\n");
	scanf("%d %c",&p->x,&p->ch);
	printf("the integer and character is\n");
	printf("%d %c\n",p->x,p->ch);
	printf("%d %c\n",(*p).x,(*p).ch);
}

