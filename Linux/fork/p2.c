#include<stdio.h>
#include<unistd.h>
int main()
{
int ret;
printf("Hello...\n");
ret = fork();
printf("Hi...\n");
ret = fork();
printf("Bye...\n");
}
