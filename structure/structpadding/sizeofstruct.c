#include<stdio.h>
struct st
{
	int x;
	int ch;
	float f;
};
int main()
{
	printf("size=%ld\n",sizeof(struct st));
}
