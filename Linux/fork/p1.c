#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	printf("Hello...\n");
	ret = fork();
	printf("Hai...\n");
}
