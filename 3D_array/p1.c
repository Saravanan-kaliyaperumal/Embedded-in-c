#include<stdio.h>
void main()
{
	int a[2][2][3]={{{10,20,30},{40,50,60}},{{11,22,33},{44,55,66}}};
	int r1,r2,c;
	r1=sizeof a/sizeof a[0];
	r2=sizeof a[0]/sizeof a[0][0];
	c=sizeof a[0][0]/sizeof a[0][0][0];
	printf("r1=%d\n",r1);
	printf("r2=%d\n",r2);
	printf("c=%d\n",c);
	printf("a=%p\n",a);
	printf("a+1=%p\n",a+1);
	printf("&a=%p\n",&a);
	printf("&a+1=%p\n",&a+1);
	printf("a[0]=%p\n",a[0]);
	printf("a[0]+1=%p\n",a[0]+1);
	printf("a[0][0]=%p\n",a[0][0]);
	printf("a[0][0]+1=%p\n",a[0][0]+1);
	printf("a[0][0][0]=%d\n",a[0][0][0]);
	printf("a[0][0][0]+1=%d\n",a[0][0][0]+1);
}
