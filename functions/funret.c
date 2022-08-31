#include<stdio.h>
int fun1(int);
int fun2(int);
int fun3(int);
void main()
{
int n=3;
int ret=fun1(n);
printf("In main(), ret=%d\n",ret);
}
int fun1(int n)
{
	printf("In fun1()....\n");
	return 10+fun2(n*2);
	printf("hello\n");
}
int fun2(int n)
{
	printf("In fun2()....\n");
	return 2*fun3(n+20);
	printf("hai\n");
}
int fun3(int n)
{
	printf("In fun3()....\n");
	return n+5;
	printf("Bye....\n");
}
