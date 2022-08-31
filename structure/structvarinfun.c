#include<stdio.h>
void fun();
int main()
{
	struct st
	{
		int x;
		char ch;
	};
	fun();
}
void fun()
{
	struct st v={10,'A'};//we cant use main() structure variable to another function
}
