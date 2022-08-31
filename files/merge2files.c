#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Usage:./a.out f1 f2 dest\n");
		return 0;
	}
	FILE *f1=fopen(argv[1],"r");
	FILE *f2=fopen(argv[2],"r");
	if(f1 == NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	if(f2 == NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char s[100];
	FILE *fd=fopen(argv[3],"w");
	while(fgets(s,5,f1)!=NULL)
	{
		fputs(s,fd);
	}
	while(fgets(s,5,f2)!=NULL)
	{
		fputs(s,fd);
	}
	fclose(f1);
	fclose(f2);
	fclose(fd);
}
