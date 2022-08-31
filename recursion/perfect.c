#include<stdio.h>
int perfect(int,int,int);
void main()
{
        int num,sum;
        printf("enter the number\n");
        scanf("%d",&num);
        sum=perfect(num,1,0);
        if(sum==num)
                printf("Perfect number\n");
        else
                printf("Not a perfect number\n");
}
int perfect(int num,int i,int sum)
{
        if(i<num)
        {
                if(num%i==0)
                sum=sum+i;
                i++;
		return perfect(num,i,sum);
        }
	else
        return sum;
}

