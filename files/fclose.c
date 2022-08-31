#include<stdio.h>
int main()
{
/*int main(int argc, char* argv[])
{
        if (argc!=2)
        {
                printf("Usage:./a.out file\n");
                return 0;
        }*/
        FILE* fp=fopen("data.txt","w");
        fputc('S',fp);
        fputc('o',fp);
        fputc('w',fp);
        fputc('m',fp);
        fputc('i',fp);
        fputc('y',fp);
        fputc('a',fp);
	fclose(fp);
	//while(1);
}

