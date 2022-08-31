#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<3)
	{
		printf("Usage:./a.out src_file dest_files\n");
		return 0;
	}
	FILE *fs=fopen(argv[1],"r");
	if(fs == NULL)
	{
		printf("Source file doesn't exist\n");
		return 0;
	}
	FILE *fd; char ch,op; int i;

	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"r");
		if(fd != NULL)
		{
			printf("%s is exist do you want to overwrite\n",argv[i]);
			scanf(" %c",&op);
			if(op == 'y')
			{
				fclose(fd);
				goto label;
			}
			else
				continue;
		}
label:
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fs))!= -1)
			fputc(ch,fd);
		fclose(fd);
		rewind(fs);
	}	
}
