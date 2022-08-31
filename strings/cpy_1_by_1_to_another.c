#include<stdio.h>
int main()
{
	char s1[20],s2[20],s3[40];
	int i,j;
	printf("Enter first string\n");
	scanf("%[^\n]",s1);
	//printf("s1 = %s\n",s1);
	printf("Enter second string\n");
	scanf(" %[^\n]",s2);
	//printf("s2 = %s\n",s2);
	for(i=0,j=0;i<40;i++,j++)
	{
		if((i%2==0)||(s2[j]=='\0'))
		{
			s3[i]=s1[i-j];
			j--;
		}
		else
			s3[i]=s2[j];
	}
	s3[i]='\0';
	printf("Destination String = %s\n",s3);
	return 0;
}
	

