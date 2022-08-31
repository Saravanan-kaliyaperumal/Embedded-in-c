#include<stdio.h>
struct st
{
	int x;
	char ch;
};
int main()
{
	struct st s[3]={{10,'A'},{20,'B'},{30,'C'}};
	int i;
	for(i=0;i<3;i++)
	printf("%d %c\n",s[i].x,s[i].ch);
}
