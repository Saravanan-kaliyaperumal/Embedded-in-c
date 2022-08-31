#include<stdio.h>
union u
{
	int x;
	char ch;
};
int main()
{
	union u v={300};
	if(v.ch==44)
		printf("little endian\n");
	else 
		printf("Big endian\n");
}

