#include<stdio.h>
#include<string.h>
char *my_strncpy(char *,char *,int);
void main()
{
        char s[20],d[20];
	int n;
        printf("Enter the source string\n");
        scanf("%s",s);
	printf("enter the number\n");
	scanf("%d",&n);
//      char *p=strncpy(d,s,n);
        char *p=my_strncpy(d,s,n);
        printf("s=%s\n",s);
        printf("d=%s\n",d);
        printf("p=%s\n",p);
}
char *my_strncpy(char *p,char *q,int n)
{
        int i;
        for(i=0;((i<n)&&(p[i]=q[i]));i++);
	p[i]='\0';
        return p;
}

