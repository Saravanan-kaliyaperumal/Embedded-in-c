#include<stdio.h>
#include<string.h>
void main()
{
        char s[3][10]={"Hello","Hai","Bye"};
        int i;
	char *a[]={s[0],s[1],s[2]};
        strcpy(a[0],"Vector");
        strcpy(a[1],"India");
        strcpy(a[2],"Embedded");
        for(i=0;i<3;i++)
                printf("%s\n",a[i]);
}

