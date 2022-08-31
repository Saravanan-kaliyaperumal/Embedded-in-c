#include<stdio.h>
void main()
{
	int x=10,y=20;
	//int const *const p=&x;
	//*p=15;
	//p=&y;

	int *const p;
	//p=&x;
	*p=15;
	

	//int *const p=&x;
	//*p=15;
	//p=&y;
	

	//const int *p=&x;
	//*p=5;
	//p=&y;
	

	printf("&x=%p,&y=%p,p=%p\n",&x,&y,p);
	printf("x=%d,y=%d,*p=%d",x,y,*p);
}
