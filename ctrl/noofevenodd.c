#include<stdio.h>
void main()
{
	int even=0,odd=0,num,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num!=0)
	{
               rem=num%10;
	       if(rem%2==0)
		       even++;
               else
		       odd++;
	       num /=10;
	}
printf("No of even digits =%d\n",even);
printf("No of odd digits =%d\n",odd);
}
