#include<stdio.h>
char *rev(char*);
void main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);
	char *p=rev(s);
	printf("after reversing the string = %s\n",s);
}
char* rev(char *p)
{
	int i,j=0,temp;
	while(p[j]!=0)
	{
		j++;
	}
	i=0,j=j-1;
	while(i<j)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++;
		j--;
	}
	return p;
}
