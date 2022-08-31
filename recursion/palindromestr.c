#include<stdio.h>
#include<string.h>
char *palin(char *,int,int);
void main()
{
	char s[50];
	printf("Enter the string\n");
	scanf("%s",s);
	char *p=palin(s,0,(strlen(s)-1));
	if(p==0)
		printf("palindrome string\n");
	else
		printf("Not a palindrome\n");
}
char *palin(char *p,int i,int j)
{
	if(i<j)
	{
		if(p[i]==p[j])
			palin(p,++i,--j);
	}
	else
	{
		if(i>=j)
			return 0;
		else
			return NULL;
	}
}
