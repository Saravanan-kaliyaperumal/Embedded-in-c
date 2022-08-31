#include<stdio.h>
#define N 5
void main()
{
int a[N],*p,i;
float b[N],*q;
for(i=0;i<N;i++)
{
	a[i]=1;b[i]=1;
}
p=&a[3];
q=&b[3];
*p=5;
*(p-1)=7;
*(p+1)=9;
*q=.2;
*(q-1)=.4;
*(q+1)=.6;
for(i=0;i<N;i++)
printf("\n%d\t%f",a[i],b[i]);
printf("\n");
}
