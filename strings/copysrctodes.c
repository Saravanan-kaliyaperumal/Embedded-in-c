#include<stdio.h>
void main()
{
	char s[50],d[20];
	int i,j;
	printf("enter the source string\n");
	scanf("%[^\n]",s);
	printf("Enter the destination string\n");
	scanf("%s",d);
	for(i=0;d[i]=s[i];i++);
	printf("source = %s\n",s);
	printf("destination = %s\n",d);
}
