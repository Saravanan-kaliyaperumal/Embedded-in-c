#include<stdio.h>
void fun();
int main()
{
	void (*fp)();
	//fp=fun;
	fp=&fun;
	//fp();
	(*fp)();
}
void fun()
{
	printf("Fun function\n");
}

