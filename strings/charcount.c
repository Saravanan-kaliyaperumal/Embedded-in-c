#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,c=0;
	printf("enter the string\n");
	scanf("%s",s);
	printf("Enter the character:\n");
	scanf(" %c",&ch);
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			c++;
	}
	if(c==0)
		printf("%c doesn't present\n",ch);
	else
		printf("character is exist %c=%d times\n",ch,c);
}
