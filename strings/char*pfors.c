#include<stdio.h>
void main()
{
	char s[]="abcde";
	char *p=s;
	p[0]='A';
	printf("%s\n",p);
}
