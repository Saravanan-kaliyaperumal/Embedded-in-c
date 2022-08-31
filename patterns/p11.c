#include<stdio.h>
void main()
{
        int num,i,j,s,l;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("\n");
        for(i=-num;i<=num;i++)
        {
                if(i<0)
                        l=-i;
                else
                        l=i;
                for(j=0;j<num+1;j++)
		{
			if(j<l)
                        	printf(" ");
			else
                 		printf("* ");
		}
                printf("\n");
		
        }
}

