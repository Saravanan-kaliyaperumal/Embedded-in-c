#include<stdio.h>
void main()
{
	char a[]="Hello";
	char b[]="Hai";
	char c[]="Bye";
	char *p[]={a,b,c};
	int i;
	for(i=0;i<3;i++)
		printf("p[%d]=%s\n",i,p[i]);
}

