#include<stdio.h>
#include<string.h>
void main()
{
        char s[200];
        int i,j,count;
        printf("Please enter any string:\n");
        scanf("%[^\n]",s);
        for(i=0;i<strlen(s);i++)
        {
		count=1;
                for(j=i+1;s[j]!='\0';j++)
                {
                        if(s[i]==s[j])
			{
				count++;
				s[j]='0';
			}
		}
		if(count>1 && s[i]!='0')  
		printf("duplicate character %c = %d times\n",s[i],count);
	}
}

