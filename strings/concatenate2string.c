#include<stdio.h>
void main()
{
        char s[50],d[20];
        int i,j;
        printf("enter the source string\n");
        scanf("%[^\n]",s);
        printf("Enter the destination string\n");
        scanf("%s",d);
	for(j=0;d[j];j++);
        for(i=0;(d[j]=s[i]);j++,i++);
        printf("source = %s\n",s);
        printf("destination = %s\n",d);
}

