#include<stdio.h>
int main(int argc, char* argv[])
{
	if (argc!=2)
	{
		printf("Usage:./a.out file\n");
		return 0;
	}
	FILE* fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("file doesn't exist\n");
	else
		printf("file is exist\n");
}


