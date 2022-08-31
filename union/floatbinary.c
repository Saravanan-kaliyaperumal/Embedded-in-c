#include<stdio.h>
union u
{
	double f;
	long long int x;
};
int main()
{
	union u v={22.7};
	int i;
	for(i=63;i>=0;i--)
		printf("%lld",v.x>>i&1);
	printf("\n");
}
