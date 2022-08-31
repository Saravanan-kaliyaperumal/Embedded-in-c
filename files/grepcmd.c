#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
        if (argc!=3)
        {
                printf("Usage:./a.out word file\n");
                return 0;
        }
        FILE* fp=fopen(argv[2],"r");
        if(fp==NULL)
        {
                printf("%s:No such file or dirextory\n",argv[2]);
                return 0;
        }
	char ch;
	int count=0,big_line_length=0;
	while((ch=fgetc(fp))!=-1)
	{
		count ++;
		if(ch=='\n')
		{
			if(big_line_length<count)
				big_line_length=count;
			count = 0;
		}
	}
	rewind(fp);
	char* buf=(char *)malloc(big_line_length*sizeof(char));
	while(fgets(buf,big_line_length,fp)!=NULL)
	{
		if(strstr(buf,argv[1])!=NULL)
			printf("%s",buf);
	}
}
