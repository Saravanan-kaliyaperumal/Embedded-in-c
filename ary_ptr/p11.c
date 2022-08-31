#include<stdio.h>
void main()
{
        char a[]="Hello";
        char b[]="Hai";
        char c[]="Bye";
        char *p[]={a,b,c};
	*p[0]=*p[0]^32;
	*p[1]=*p[1]^32;
	*p[2]=*p[2]^32;
        int i;
        for(i=0;i<3;i++)
                printf("p[%d]=%s\n",i,p[i]);
}

