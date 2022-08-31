#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50,60,70,80,90};
int i,n,pos,ele;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n");
printf("enter the position\n");
scanf("%d",&pos);
if(!((pos>=0)&&(pos<=n-1)))
{
        printf("invalid position value\n");
}
printf("enter the element\n");
scanf("%d",&ele);
for(i=n-2;i>=pos;i--)
a[i+1]=a[i];
a[pos]=ele;
printf("After the insertion of an element\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
