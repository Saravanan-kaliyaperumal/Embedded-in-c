#include<stdio.h>
void main()
{
	int i=1;
	if(i++&&(i==1))
		printf("YES\n");
	else
		printf("NO\n");
}
