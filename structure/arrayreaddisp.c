#include<stdio.h>
struct st
{
        int x;
        char ch;
};
int main()
{
        struct st s[3];
        int i;
	printf("enter the 3 structure data\n");
        for(i=0;i<3;i++)
		scanf("%d %c",&s[i].x,&s[i].ch);
	printf("structure data's are\n");

	for(i=0;i<3;i++)
        	printf("%d %c\n",s[i].x,s[i].ch);
}

