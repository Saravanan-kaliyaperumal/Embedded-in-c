#include<stdio.h>
int main(int argc, char* argv[])
{
        if (argc!=3)
        {
                printf("Usage:./a.out file\n");
                return 0;
        }
        FILE* fs=fopen(argv[1],"r");
        if(fs==NULL)
        {
                printf("file doesn't exist\n");
                return 0;
        }
	FILE* fd=fopen(argv[2],"w");
        char ch;
        while((ch=fgetc(fs))!=-1)
        fputc(ch,fd);
//        fclose(fs);
//	fclose(fd);
}

