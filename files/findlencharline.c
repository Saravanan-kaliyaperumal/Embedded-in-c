#include<stdio.h>
int main()
{
	FILE* fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch;int file_size=0,line=0,big_line=0,big_line_length=0,count=0;
	while((ch=fgetc(fp))!=-1)
	{
		file_size++;
		count++;
		if(ch=='\n')
		{
			line++;
			if(count>big_line_length)
			{
				big_line=line;
				big_line_length=count;
			}
			count=0;
		}
	}
	printf("file_size=%d\n",file_size);
	printf("no of lines=%d\n",line);
	printf("big_line=%d\n",big_line);
	printf("big_line_length=%d\n",big_line_length);
}
