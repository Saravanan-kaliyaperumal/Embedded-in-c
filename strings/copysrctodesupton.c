#include<stdio.h>
void main()
{
        char s[50],d[20];
        int i,n;
        printf("enter the source string\n");
        scanf("%[^\n]",s);
        printf("Enter the n value\n");
        scanf("%d",&n);
        for(i=0;(i<n)&&(d[i]=s[i]);i++);
	d[i]='\0';
        printf("source = %s\n",s);
        printf("destination = %s\n",d);
}

