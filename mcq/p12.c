#include<stdio.h>
void main()
{
	int y=1,x=0;
	int l=(y++,x++)?y:x;
	printf("%d\n",l);
}
