#include<stdio.h>
void main()
{
        char s[20];
        int i,j,c=0;
        printf("enter the string\n");
        scanf("%s",s);
        for(i=0;s[i];i++)
        {
		for(j=0;((j<i)&&s[j]!=s[i]);j++);
		if(i==j)
		{
			c=1;
			for(j=j+1;s[j];j++)
			{
				if(s[i]==s[j])
					c++;
			}
                printf("%c = %d times\n",s[i],c);
		}
	}
}

