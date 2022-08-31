#include<stdio.h>
#include<stdlib.h>
int main()
{
        char*p;
	int i;
        p=(char *)malloc(5*sizeof(char));
        if(p==NULL)
        {
                printf("DMA is failed\n");
                return 0;
        }
        printf("Enter the values\n");
        for(i=0;i<5;i++)
                scanf(" %c",&p[i]);
        printf("The values are:\n");
        for(i=0;i<5;i++)
                printf("%c ",p[i]);
        printf("\n");
}

