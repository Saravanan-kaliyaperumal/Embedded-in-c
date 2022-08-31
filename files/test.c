#include<stdio.h>
#include<string.h>
void rev_str(char *,int,int);
int main(int argc, char* argv[])
{
	if(argc!=4)
	{
		printf("Usage: ./a.out f1 word repword\n");
		return 0;
	}
	FILE *fs=fopen(argv[1],"r+");
	if(fs==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char a[50];
	while(fgets(a,5,fs)!=NULL)
	{
		if(strcmp(a,argv[2]) == 0)
		{
			fputs(argv[3],fs);
		}
		else
			fputs(a,fs);
	}
}

