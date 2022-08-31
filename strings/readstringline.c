#include<stdio.h>
void main()
{
	int x;
	char s[20];
	printf("enter the x value:\n");
	scanf("%d",&x);
	printf("enter the string line\n");
	//gets(s);
	scanf(" %[^\n]",s);
	printf("x=%d, s=%s\n",x,s);

}
