#include<stdio.h>
union u
{
	int x;
	char ch;
	long long int y;
};
int main()
{
	union u v;
	printf("size of v:%ld\n",sizeof v);
	printf("&v.x=%p\n",&v.x);
	printf("&v.ch=%p\n",&v.ch);
	printf("&v.y=%p\n",&v.y);
}
