#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int i;
printf("\n Array element printing\n");
for(i=0;i<5;i++)
printf("%d %d %d %d\n",a[i],i[a],*(a+i),*(i+a));
for(i=0;i<5;i++)
printf("%p %p %p %p\n",&a[i],&i[a],a+i,i+a);
}

