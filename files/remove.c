#include<stdio.h>
int main(int argc,char*argv[])
{
	if(argc!=2)
	{
		printf("Usage:./a.out file\n");
		return 0;
	}
	int r=remove(argv[1]);
	if(r==0)
		printf("the file is removed successfully\n");
	else
		printf("the file doesn't exist\n");
}

