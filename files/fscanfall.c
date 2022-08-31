#include<stdio.h>
int main()
{
	FILE* fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
	return 0;
	}
	char a[20];
	while(fscanf(fp,"%s",a)!=EOF)
		printf("%s\n",a);
}
