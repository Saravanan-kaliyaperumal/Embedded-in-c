#include<stdio.h>
void main()
{
	long long int num,i,binary;
	printf("enter the number:\n");
	scanf("%lld",&num);
	for(i=31;i>=0;i--)
		printf("%lld",num>>i&1);
	printf("\n");

	for(i=31;i>=0;i--)
		printf("%lld",!(num>>i&1));
	printf("\n");
	binary=(printf("%d",!(num>>i&1)));
	
}
