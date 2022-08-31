#include<stdio.h>
int main()
{
	struct st
	{
		int x;
		char ch;
		float f;
	};
	struct st s;
	printf("enter the structure data 1.int 2.char 3.float\n");
	scanf("%d %c %f",&s.x,&s.ch,&s.f);
	printf("x=%d,ch=%c,f=%f\n",s.x,s.ch,s.f);
}

