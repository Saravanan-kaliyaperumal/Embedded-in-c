#include<stdio.h>
char *fun(char ,float );
int main()
{
	char *(*fp)(char, float);
	fp=fun;
	char *p=fp('A',4.5);
	printf("main(), p=%s\n",p);
}
char *fun(char ch,float f)
{
	printf("Test function\n");
	printf("ch=%c,f=%f\n",ch,f);
	return "vector";
}
