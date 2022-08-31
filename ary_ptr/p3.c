#include<stdio.h>
void main()
{
        int a[]={10,20,30,40,50},i;
        int *p[3]={a,a+2,a+4};
        for(i=0;i<3;i++)
        {
        printf("%d ",*p[i]);
        }
	printf("\n");
}

