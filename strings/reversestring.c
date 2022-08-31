#include<stdio.h>
void main()
{
	char s[20];
	int i,j,temp;
	printf("enter the string\n");
	scanf("%s",s);
	for(j=0;s[j]!=0;j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("After reversing the string: %s\n",s);
}

