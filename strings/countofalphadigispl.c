#include<stdio.h>
void main()
{
	char s[20];
	int i,upper=0,lower=0,digits=0,spl=0;
	printf("Entert the string\n");
	scanf("%[^\n]",s);
	//gets(s);
	printf("s=%s\n",s);
	for(i=0;s[i];i++)
	{
		if((s[i]>=65)&&(s[i]<=90))
			upper++;
		else if((s[i]>=97)&(s[i]<=122))
			lower++;
		else if((s[i]>=48)&&(s[i]<=57))
			digits++;
		else
			spl++;
	}
	printf("upper=%d, lower=%d, digits=%d, spl=%d\n",upper,lower,digits,spl);
}


