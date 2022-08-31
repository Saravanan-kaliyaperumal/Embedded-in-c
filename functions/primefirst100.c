#include<stdio.h>
#include<math.h>
void prime(int,int);
void main()
{
        int num,i,sq;
        prime(num,sq);
}
void prime(int num, int sq)
{
        for(num=1;num<100;num++)
        {
                sq=sqrt(num);
                int i=2;
while(i<=sq)
                {
                if(num%i==0)
                break;
                i++;
                }
if(i==sq+1)
        	printf("%d ",num);
        }
        printf("\n");
}

