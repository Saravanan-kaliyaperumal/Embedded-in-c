#include<stdio.h>
#include<stdlib.h>
int *fun();
int main()
{
	int x;
	int* p=fun();
	printf("int main(),p=%p\n",p);
	printf("*P=%d\n",*p);
	free (p);
}
int* fun()
{
	int x=10;;
	printf("In fun(),&x=%p\n",&x);
	return &x;
}
	
