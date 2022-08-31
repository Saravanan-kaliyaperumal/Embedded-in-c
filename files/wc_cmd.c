#include<stdio.h>
int main()
{
	FILE *fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch,a[50];
	int count = 0,line = 0, words =0;
	while((ch=fgetc(fp))!=-1)
	{
		count ++;
		if(ch=='\n')
			line++;
	}
	rewind(fp);
	while(fscanf(fp,"%s",a)!=EOF)
	{
		words++;
	}
	printf("count=%d\n",count);
	printf("line=%d\n",line);
	printf("words=%d\n",words);
}
