#include<stdio.h>
int main()
{
	int x=123456789;
	FILE* fp=fopen("data.txt","w");
	//fprintf(fp,"%d",x);
	fwrite(&x,sizeof(int),1,fp);
}
