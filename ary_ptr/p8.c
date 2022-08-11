#include<stdio.h>
void main()
{
        int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
        int *p[3]={(int *)(a),(int *)(a+1),(int *)(a+2)};
        int i;
        printf("%p\n",*(p+1)+1);
        printf("%p\n",*(p+0)+2);
        printf("%d\n",*(p[2]+1));
}

