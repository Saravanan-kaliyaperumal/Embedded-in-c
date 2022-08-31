#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("data.txt","r+");
        if(fp==NULL)
        {
                printf("File doesn't exist");
                return 0;
        }
        char ch;
        while((ch=fgetc(fp))!=EOF)
        {
                        if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
                        {
                                ch=ch^32;
                                fseek(fp,-1,1);
                                fputc(ch,fp);
                }
        }
        fclose(fp);
}

