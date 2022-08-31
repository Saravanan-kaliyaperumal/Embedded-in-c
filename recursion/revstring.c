#include<stdio.h>
#include<string.h>
char *rev(char*,int,int);
void main()
{
        char s[20];
	int j;
        printf("enter the string\n");
        scanf("%s",s);
        char *p=rev(s,0,strlen(s)-1);
        printf("after reversing the string = %s\n",p);
}
char* rev(char *p,int i, int j)
{
        char temp;
        if(i<j)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
                i++;
                j--;
		return rev(p,i,j);
        }
	else
        return p;
}

