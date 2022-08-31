#include<stdio.h>
#include<string.h>
char *my_strstr(char *,char *);
void main()
{
	char m[20],s[20];
	printf("enter the main string\n");
	scanf("%s",m);
	printf("enter the sub string\n");
	scanf("%s",s);
	char *p=strstr(m,s);
	//char *p=my_strstr(m,s);
	if(p==NULL)
		printf("substring doesn't present\n");
	else
		printf("sub string present at %s\n",p);
}
char *my_strstr(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(q[0]==p[i])
		{
			for(j=1;q[i];j++)
			{
				if(p[i+j]!=q[i])
					break;
			}
			if(q[i]=='\0')
				return p+i;
		}
	}
	return NULL;
}
