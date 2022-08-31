#include<stdio.h>
void main()
{
	char s[20]="Sarvan cena";
	int i;
	for(i=0;s[i]!='\0';i++);
	printf("string length=%d\n",i);
	printf("Array size=%ld\n",sizeof s);
}
