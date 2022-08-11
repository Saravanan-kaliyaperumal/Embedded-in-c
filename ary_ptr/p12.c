#include<stdio.h>
void main()
{
	char *a[]={"Hello","Hai","Bye"};
	*a[0]='h';
	printf("%s\n",a[0]);
}
