#include<stdio.h>
struct st
{
	char ch;
	float f;
        long int x;
        long int y;
};
int main()
{
        printf("size=%ld\n",sizeof(struct st));
}

