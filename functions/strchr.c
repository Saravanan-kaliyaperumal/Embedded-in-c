#include<stdio.h>
#include<string.h>
char *my_strchr(char *,char);
void main()
{
char s[20],ch;
printf("enter the string\n");
scanf("%s",s);
printf("enter the character\n");
scanf(" %c",&ch);
//char *p=strchr(s,ch);
char *p=my_strchr(s,ch);
if(p==NULL)
	printf("char doesn't found\n");
else
	printf("character found at %s\n",p);
}
char *my_strchr(char *p, char c)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==c)
			return p+i;
	}
	return NULL;
}
