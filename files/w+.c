#include<stdio.h>
int main()
{
	FILE* fp=fopen("data.txt","w+");
	char ch;
	printf("Enter the data into the file\n");
	while(ch=getchar()!=EOF)
		fputc(ch,fp);
	printf("Data is successfully saves into file\n");
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
}

