#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="recitals";
	char s2[]="articles";
	char temp;
	int i,j;
	int n1=strlen(s1);
	int n2=strlen(s2);
	if(n1!=n2)
	{
		printf("%s and %s are not anagrams\n",s1,s2);
		return 0;
	}
	for(i=0;i<n1-1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(s1[i]>s1[j])
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
			if(s2[i]>s2[j])
			{
				temp=s2[i];
				s2[i]=s2[j];
				s2[j]=temp;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
		{
			printf("%s and %s are not anagrams\n",s1,s2);
			return 0;
		}
		printf("%s and %s are anagrams\n",s1,s2);
		return 0;
	}
}
