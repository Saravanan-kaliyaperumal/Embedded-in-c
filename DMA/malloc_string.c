#include<stdio.h>
#include<stdlib.h>
int main()
{
        char* p;
        p=(char *)malloc(20*sizeof(char));
        if(p==NULL)
        {
                printf("DMA is failed\n");
                return 0;
        }
        printf("Enter the string\n");
	scanf("%s",p);
        printf("p=%s\n",p);
}

