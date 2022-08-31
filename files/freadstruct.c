#include<stdio.h>
int main()
{
        struct st
        {
                char ch;
                int x;
                float f;
                char a[20];
        }v;
        FILE* fp=fopen("data.txt","r");
        fread(&v,sizeof(struct st),1,fp);
	printf("v.ch=%c\n",v.ch);
	printf("v.x=%d\n",v.x);
	printf("v.f=%f\n",v.f);
	printf("v.a=%s\n",v.a);
}

