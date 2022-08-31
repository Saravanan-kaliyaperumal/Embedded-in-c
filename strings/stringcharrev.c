#include<stdio.h>
void main()
{
	char s[20]="Sarvan cena";
	int i;
	for(i=0;s[i]!='\0';i++);
	for(i=i-1;i>=0;i--)
		printf("%c",s[i]);
	printf("\n");
}
