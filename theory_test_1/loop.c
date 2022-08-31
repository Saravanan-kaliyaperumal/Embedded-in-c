#include<stdio.h>
int main()
{
	int sum=0,count;
	for(count=5;sum+=--count;)
		printf("%d\n",sum);
}
