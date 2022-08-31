#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the a and b values\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is bigger than %d\n",a,b);
	else if(a<b)
		printf("%d is smaller than %d\n",a,b);
	else
		printf("%d and %d both are equal\n ",a,b);
}
