#include<stdio.h>
#include<string.h>
char *del(char*,char);
void main()
{
        int i,j,len;
        char s[100],ch;
        printf("Enter the string\n");
        scanf("%[^\n]",s);
        printf("enter the character u want to remove:\n");
        scanf(" %c",&ch);
	char *p=del(s,ch);
	printf("after deleting all occurances of character %c = %s\n",ch,p);
}
char *del(char *p, char c)
{
	int i,j,len;
        len=strlen(p);
        for(i=0;i<len;i++)
        {
                if(p[i]==c)
                {
                        for(j=i;j<len;j++)
                                p[j]=p[j+1];
                len--;
                i--;
                }
	}
return p;
}
