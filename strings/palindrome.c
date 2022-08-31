#include<stdio.h>
void main()
{
	char s[20];
	int i,j;
	printf("enter the string\n");
	scanf("%s",s);
	//for(j=0;s[j]!='\0';j++);
	for(j=0;s[j];j++);
	printf("j=%d\n",j);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
			break;
	}
	if(i<j)
		printf("Not palindrome...\n");
	else
		printf("palindrome...\n");
}
