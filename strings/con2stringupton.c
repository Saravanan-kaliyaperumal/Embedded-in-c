#include<stdio.h>
void main()
{
        char s[50],d[20];
        int i,j,n;
        printf("enter the source string\n");
        scanf("%[^\n]",s);
        printf("Enter the destination string\n");
        scanf("%s",d);
	printf("enter the n value\n");
	scanf("%d",&n);
        for(j=0;d[j];j++);
        for(i=0;(i<n)&&(d[j]=s[i]);j++,i++);
	d[j]='\0';
        printf("source = %s\n",s);
        printf("destination = %s\n",d);
}

