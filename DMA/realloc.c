#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=(int *)malloc(5*sizeof(int));
	printf("p=%p\n",p);
	printf("no of bytes:%ld\n",((long int*)p)[-1]);
	p=(int *)realloc(p,20*sizeof(int));
	printf("p=%p\n",p);
	printf("no of bytes:%ld\n",((long int*)p)[-1]);
	p=(int *)realloc(p,5*sizeof(int));
	printf("p=%p\n",p);
	printf("no of bytes:%ld\n",((long int*)p)[-1]);
}

	
