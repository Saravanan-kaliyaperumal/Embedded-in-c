#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *q,i;
	q=(int *)malloc(5*sizeof(int));
	printf("q=%p\n",q);
	for(i=0;i<5;i++)
		printf("%d",q[i]);
	printf("\n");
}
