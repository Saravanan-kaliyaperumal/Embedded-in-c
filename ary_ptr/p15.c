#include<stdio.h>
#include<string.h>
void main()
{
        char *a[]={"Hello","Hai","Bye"};
        int i;
        strcpy(a[0],"Vector");
        strcpy(a[1],"India");
        strcpy(a[2],"Embedded");
        for(i=0;i<3;i++)
                printf("%s\n",a[i]);
}

