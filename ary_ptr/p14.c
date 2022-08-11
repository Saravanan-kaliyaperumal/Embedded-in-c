#include<stdio.h>
void main()
{
	char *a[]={"Hello","Hai","Bye"};
	int i;
	a[0]="Vector";
	a[1]="India";
	a[2]="Embedded";
	for(i=0;i<3;i++)
		printf("%s\n",a[i]);
}
