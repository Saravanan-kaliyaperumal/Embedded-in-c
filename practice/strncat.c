#include<stdio.h>
char *my_strncat(char *,char *,int);
int main()
{
	char s[20],d[20];
	int n,i,j;
	printf("Enter the sourc\n");
	scanf("%s",s);
	printf("enter the destination\n");
	scanf("%s",d);
	printf("Enter the n value\n");
	scanf("%d",&n);
	char *p=my_strncat(d,s,n);
	printf("s=%s\n",s);
	printf("d=%s\n",d);
	printf("p=%s\n",p);
}
char *my_strncat(char *p,char *q,int n)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;((j<n)&&(p[i]=q[j]));j++,i++);
	p[i]='\0';
	return p;
}


