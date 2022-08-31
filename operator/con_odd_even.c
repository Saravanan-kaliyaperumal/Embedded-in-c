#include<stdio.h>
void main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
num&1?puts("odd"):puts("even");
}

