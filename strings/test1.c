#include<stdio.h>
#include<string.h>
void main()
{
        char s1[100];
        printf("Enter the string:\n");
        scanf("%[^\n]",s1);
        int i,j;       
 	for(i=0;s1[i]!='\0';++i)
        {
                while(!(s1[i]>='A'&&s1[i]<='Z')&&(s1[i]>='a'&&s1[i]<='z')&&(s1[i]!='\0'))
                {
                for(j=i;s1[j]!='\0';++j)
                s1[j]=s1[j+1];
                s1[j]='\0';
                }
        }
        printf("sttring without special char = %s\n",s1);
}

