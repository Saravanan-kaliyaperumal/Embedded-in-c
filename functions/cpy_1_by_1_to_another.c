#include<stdio.h>
char *cpy(char *,char *,char *);
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
	char *p=cpy(s1,s2,s3);
	printf("Destination string=%s\n",p);
	}
char *cpy(char *p1,char *p2, char *p3)
{
	int i,j;
        for(i=0,j=0;i<40;i++,j++)
        {
                if((i%2==0)||(p2[j]=='\0'))
                {
                        p3[i]=p1[i-j];
                        j--;
                }
                else
                        p3[i]=p2[j];
        }
        p3[i]='\0';
        return p3;
}

