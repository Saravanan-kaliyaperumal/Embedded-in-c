#include<stdio.h>
int main()
{
	struct st
	{
		char ch;
		int x;
		float f;
		char a[20];
	}v={'A',1234,22.7,"vector"};
	FILE* fp=fopen("data.txt","w");
	fwrite(&v,sizeof(struct st),1,fp);
}
