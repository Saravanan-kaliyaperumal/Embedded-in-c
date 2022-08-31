#include<stdio.h>
int main()
{
	FILE* fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("file doesn't exist\n");
		return 0;
	}
	char ch;
	fseek(fp,5,0);
	fseek(fp,5,1);
	fseek(fp,-5,2);
	ch=fgetc(fp);
	printf("ch=%c\n",ch);
	printf("File position:%ld\n",ftell(fp));
}
