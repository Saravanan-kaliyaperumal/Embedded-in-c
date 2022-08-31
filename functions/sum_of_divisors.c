#include<stdio.h>
int div(int);
void main()
{
        int num,sum;
        printf("enter the number:\n");
        scanf("%d",&num);
        sum=div(num);
        printf("sum of divisor = %d\n",sum);
}
int div(int num)
{
        int s=0,i=1;
        while(i<num)
        {
                if(num%i==0)
                {
                        s=s+i;
                }
                        i++;
        }
                return s;
        }

