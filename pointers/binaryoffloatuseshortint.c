#include<stdio.h>
void main()
{
float num;
printf("enter the number\n");
scanf("%f",&num);
short int i,j,*p=(short int *)&num;
p=p+1;
for(i=0;i<2;i++)
{
        for(j=15;j>=0;j--)
                printf("%d",*p>>j&1);
p--;
}
printf("\n");
}

