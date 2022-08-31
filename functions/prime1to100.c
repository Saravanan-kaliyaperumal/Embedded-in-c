#include<stdio.h>
#include<math.h>
void prime(int, int);
void main()
{
        int num,i,sq;
	for(num=2;num<100;num++)
	{
		sq=sqrt(num);
        	prime(num,sq);
	}
	printf("\n");
}
void prime(int num, int sq)
{
	int i=2;
	while(i<=sq)
                {
                if(num%i==0)
                break;
                i++;
                }
if(i==sq+1)
	{
        printf("%d ",num);
	}
}

