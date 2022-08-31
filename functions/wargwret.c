#include<stdio.h>
int sum(float, float);
void main()
{
        float a,b,c;
        printf("Enter a&b:\n");
        scanf("%f%f",&a,&b);
        c=sum(a,b);
	printf("sum=%f\n",c);
}
int sum(float x, float y)
{
        float s=0;
        s=x+y;
      return s;
}
