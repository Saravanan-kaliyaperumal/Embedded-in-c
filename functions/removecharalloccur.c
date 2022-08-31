#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,len;
	char s[100],ch;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the character u want to remove:\n");
	scanf(" %c",&ch);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==ch)
		{
			for(j=i;j<len;j++)
				s[j]=s[j+1];
		len--;
		i--;
		}
	}
	printf("the final string after removing all occurances of %c = %s\n",ch,s);
}
