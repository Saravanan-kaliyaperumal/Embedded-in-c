#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Usage:./a.out char char\n");
		return 0;
	}
	char ch1,ch2;
	ch1=argv[1][0];
	ch2=argv[2][0];
	printf("ch1=%c ch2=%c\n",ch1,ch2);
}

