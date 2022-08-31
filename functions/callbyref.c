#include<stdio.h>
void swap(int *, int *);
void main()
{
int x=10,y=20;
printf("In  main(), Before swap, x=%d, y=%d\n",x,y);
swap(&x,&y);
printf("In main(), after swap x=%d, y=%d\n",x,y);
}
void swap(int *a, int *b)
{
        printf("In swap()....\n");
        printf("Before swap, a=%d,b=%d\n",*a,*b);
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        printf("After swap, a=%d, b=%d\n",*a,*b);
}

