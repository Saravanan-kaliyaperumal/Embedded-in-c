#include<stdio.h>
void main()
{
int num,i,j,s;
char ch;
printf("enter the number of lines:\n");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
	ch='A';
for(j=0;j<=num-i;j++,ch++)
	printf("%c",ch);
if(i==0)
	printf("%c",ch);
else
	{
	for(s=0;s<(2*i)+1;s++)
	printf(" ");
	}
ch--;
for(j=0;j<=num-i;j++,ch--)
	printf("%c",ch);
printf("\n");
}
}

