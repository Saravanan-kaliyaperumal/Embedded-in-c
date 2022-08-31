#include<stdio.h>
void main()
{
	char s[20];
	int i;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("s=%s\n",s);
	for(i=0;s[i];i++)
	{
		if(((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)))
			s[i]=s[i]^32;
	}
	printf("After the conversion of All alphabet into opposite case\n");
	printf("s=%s\n",s);
}
