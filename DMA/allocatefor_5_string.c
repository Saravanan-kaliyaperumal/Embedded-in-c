#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i;
	char* p[5];
        for(i=0;i<5;i++)
                p[i]=(char *)malloc(20*sizeof (char *));
        printf("Enter the 5 strings\n");
        for(i=0;i<5;i++)
        {
                scanf("%s",p[i]);
        }
        printf("\n");
        printf("Display the string\n");
        for(i=0;i<5;i++)
        {
                printf("%s",p[i]);
                printf("\n");
        }
	for(i=0;i<5;i++)
        	free (p[i]);
}

