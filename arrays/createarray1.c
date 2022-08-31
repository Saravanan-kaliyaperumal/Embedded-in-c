#include<stdio.h>
void main()
{
        int a[5]={10,20,30};
        int i;
        for(i=0;i<5;i++)
                printf("a[%d]=%d a+%d=%p\n",i,a[i],i,a+i);
        printf("&i=%p\n",&i);
}

