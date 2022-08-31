#include<stdio.h>
int main()
{
	char ch;
	int x;
	float f;
	char a[20];
	FILE* fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	fscanf(fp,"%c %d %f %s\n",&ch,&x,&f,a);
	printf("ch=%c\n",ch);
	printf("x=%d\n",x);
	printf("f=%f\n",f);
	printf("a=%s\n",a);
}

