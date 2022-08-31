#include<stdio.h>
int main()
{
	struct
	{
		int x;
		char ch;
		float f;
	}s={10,'A',4.5};
	printf("%d %c %f\n",s.x,s.ch,s.f);
	printf("%d %c %f\n",(&s)->x,(&s)->ch,(&s)->f);
	printf("%p %p %p\n",&s.x,&s.ch,&s.f);
	printf("%p %p %p\n",&(&s)->x,&(&s)->ch,&(&s)->f);
}
