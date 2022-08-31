#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,len,startindex,endindex;
	char s[200];
	printf("please enter any string:\n");
	scanf("%[^\n]",s);
	len=strlen(s);
	endindex=len-1;
	printf("****given string in reverse order****\n");
	for(i=len-1;i>=0;i--)
	{
		if(s[i]==' '||i==0)
		{
			if(i==0)
				startindex=0;
			else
				startindex=i+1;
			for(j=startindex;j<=endindex;j++)
				printf("%c",s[j]);
			endindex=i-1;
			printf(" ");
		}
	}
}

