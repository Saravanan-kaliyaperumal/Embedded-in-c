#include<stdio.h>
int main()
{
	char str[50];
	int n;
        FILE* fp=fopen("data.txt","r");
        if(fp==NULL)
        {
                printf("File doesn't exist\n");
                return 0;
        }
	printf("Enter the number to read no of bytes of string\n");
	scanf("%d",&n);
	fgets(str,n,fp);
	printf("str=%s\n",str);
	fclose(fp);
	fp=fopen("s.txt","w");
	fputs(str,fp);
	fclose(fp);
}
