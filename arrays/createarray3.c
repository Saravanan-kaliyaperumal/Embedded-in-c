#include<stdio.h>
void main()
{
        int a[5]={[1]=10,[3]=30};
        int i;
        for(i=0;i<5;i++)
                printf("a[%d]=%d a+%d=%p\n",i,a[i],i,a+i);
        printf("&i=%p\n",&i);
}

