#include<stdio.h>
#include<stdlib.h>
int main()
{
        float*p;
        int i;
        p=(float *)malloc(5*sizeof(float));
        if(p==NULL)
        {
                printf("DMA is failed\n");
                return 0;
        }
        printf("Enter the values\n");
        for(i=0;i<5;i++)
                scanf("%f",&p[i]);
        printf("The values are:\n");
        for(i=0;i<5;i++)
                printf("%f ",p[i]);
        printf("\n");
}

