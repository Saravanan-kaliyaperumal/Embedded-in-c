#include<stdio.h>
#include<string.h>
void main()
{
	char s[200];
	int i,j,k;
	printf("Please enter any string:\n");
	scanf("%[^\n]",s);
	for(i=0;i<strlen(s);i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[j]==s[i])
			{
				for(k=j;s[k]!='\0';k++)
				s[k]=s[k+1];
			}
		}
	}
	printf("The final string after removing all duplicates=%s\n",s);
}
