#include<stdio.h>
int main()
{
	FILE* fp=fopen("data.txt","w");
	char ch;
	printf("Enter the data into a file\n");
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	//fclose(fp);
	printf("Data is successfully saved into the file\n");
	fp=fopen("data.txt","r");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
}

