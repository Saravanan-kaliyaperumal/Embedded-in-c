#include<stdio.h>
#include<string.h>
char *extra(char *);
void main()
{
	char s[200];
	int i,j,len;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	char *p=extra(s);
	printf("New string after removing extraspaces=%s\n",p);
}
char *extra(char *p)
{
	int i,j,len;
	len=strlen(p);
	for(i=0;i<len;i++)
	{
		if(p[0]==' ')
		{
			for(i=0;i<(len-1);i++)
				p[i]=p[i+1];
			p[i]='\0';
			len--;
			i=-1;
			continue;
		}
		if((p[i]==' ')&&(p[i+1]==' '))
		{
			for(j=i;j<(len-1);j++)
				p[j]=p[j+1];
		p[j]='\0';
		len--;
		i--;
		}
	}
	return p;
}
