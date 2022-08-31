#include<stdio.h>
void palin(int,int);
void main()
{
        int num=0;
        palin(num,0);
	printf("\n");
}
void palin(int num,int rev)
{
        int rem,temp;
        if(num<100)
        {
		temp=num;
                while(temp!=0)
                {
                        rem=temp%10;
                        rev=rev*10+rem;
                        temp=temp/10;
                }
                if(rev==num)
                        printf("%d ",rev);
		palin(++num,0);
        }
}

