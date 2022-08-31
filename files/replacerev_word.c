#include<stdio.h>
#include<string.h>
void rev_str(char *,int,int);
int main(int argc, char* argv[])
{
	if(argc!=4)
	{
		printf("Usage: ./a.out f1 f2 word\n");
		return 0;
	}
	FILE *fs=fopen(argv[1],"r");
	FILE *fd=fopen(argv[2],"w");
	if(fs==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char a[50];
	while(fscanf(fs,"%s",a)!=EOF)
	{
		if(strcmp(a,argv[3]) == 0)
		{
			rev_str(argv[3],0,strlen(argv[3])-1);
			fputs(argv[3],fd);
		}
			else
				fputs(a,fd);
		if(fgetc(fs)=='\n')
		{
			fputc('\n',fd);
			fseek(fs,-1,1);
		}
		else
			fputc(' ',fd);
	}
	//remove(argv[1]);
}
void rev_str(char *p,int i,int j)
{
	char temp;
	if(i<j)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++,j--;
		rev_str(p,i,j);
	}
}
