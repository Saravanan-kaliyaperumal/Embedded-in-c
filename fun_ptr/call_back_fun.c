#include<stdio.h>
void input(float (*fp)(float,float));
int main()
{
	float sum(float x,float y);
	input(&sum);
}
void input(float (*fp)(float,float))
{
	float a,b,c;
	printf("enter a,b values\n");
	scanf("%f%f",&a,&b);
	c=fp(a,b);
	printf("c=%f\n",c);
}
float sum(float x,float y)
{
	printf("Sum function\n");
	return x+y;
}
