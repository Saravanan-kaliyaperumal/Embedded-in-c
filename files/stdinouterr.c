#include<stdio.h>
int main()
{
	char ch;
	int x;
	float f;
	char a[20];
	printf("enter the char int float string\n");
	fscanf(stdin,"%c %d %f %s",&ch,&x,&f,a);
	fprintf(stdout,"ch = %c x=%d f=%f a=%s\n",ch,x,f,a);
}
