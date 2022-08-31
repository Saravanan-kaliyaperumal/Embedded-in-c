#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=(int *)realloc(0,5*sizeof(int));
	//int* p=(int *)malloc(5*sizeof(int));
	printf("p=%p\n",p);
	printf("no of bytes:%ld\n",((long int*)p)[-1]);
	p=(int *)realloc(p,0);
	//free (p);
	printf("p=%p\n",p);
	printf("no of bytes:%ld\n",((long int*)p)[-1]);
}

