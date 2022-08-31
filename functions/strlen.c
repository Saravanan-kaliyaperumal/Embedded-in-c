#include<stdio.h>
#include<string.h>
int my_strlen(char *);
void main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);
//	int len=strlen(s);
	int len=my_strlen(s);
	printf("string length %d\n",len);
}
int my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
