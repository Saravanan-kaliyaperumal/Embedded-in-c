#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="zzzzz";
	char s2[50]="Sowmiya";
	int c;
	c=strcmp(s1,s2);
	if(s1<s2)
		printf("s1 is small\n");
	else
		printf("s2 is small\n");
}
