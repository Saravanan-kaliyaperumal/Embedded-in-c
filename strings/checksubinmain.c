#include<stdio.h>
int main()
{
	char m[20],s[20];
	int i,j;
	printf("enter the main string\n");
	scanf("%s",m);
	printf("enter the sub string\n");
	scanf("%s",s);
	for(i=0;m[i];i++)
		{
			if(m[i]==s[0])
			{
				for(j=1;s[j];j++)
				{
					if(s[j]!=m[i+j])
						break;
				}
				if(s[j]=='\0')
				{
					printf("sub string is present at %s\n",m+i);
					return 0;
				}
			}
		}
			printf("sub string is not present in main string\n");
}
