#include<stdio.h>
#include<string.h>
char *del(char *);
void main()
{
char s[200];
printf("enter the string:\n");
scanf("%[^\n]",s);
char *p= del(s);
printf("after removing all spaces fron string=%s\n",p);
}
char *del(char *p)
{
	int i,j=0;
	for(i=0;p[i];i++)
	{
		p[i]=p[i+j];
		if((p[i]==' ')||(p[i]=='\t'))
		{
			j++;
			i--;
		}
	}
	return p;
	//printf("afer removing all spaces =  %s\n",p);
}
