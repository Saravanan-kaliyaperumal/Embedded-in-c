#include<stdio.h>
int main(int argc, char* argv[])
{
        if (argc!=3)
        {
                printf("Usage:./a.out fs fd\n");
                return 0;
        }
	char str[50];
        FILE* fs=fopen(argv[1],"r");
        if(fs==NULL)
        {
                printf("file doesn't exist\n");
                return 0;
        }
	FILE* fd=fopen(argv[2],"w");
	while(fgets(str,0,fs)!=NULL)
//	fgets(str,5,fs);
		fputs(str,fd);
	fclose(fd);
	fclose(fs);
}
