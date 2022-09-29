#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Hello...\n");
fork();
printf("Hai...\n");
fork();
printf("Vector...\n");
fork();
printf("Bye...\n");
}
