#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct flames
{
        char l;
        struct flames *next;
}flames;
char* relation(char ch);
int main()
{
        char s1[20],s2[20],s3[20],s4[20],ch;
        int i,j,m,k;
        flames *s[6], *p;
	flames *temp;
        char* relate;
        printf("Enter the first name\n");
        scanf("%[^\n]",s1);
        printf("Enter the second name\n");
        scanf(" %[^\n]",s2);
	strcpy(s3,s1);
	strcpy(s4,s2);
        for(i=0;s1[i];i++)
        {
                if((s1[i]>='A')&&(s1[i]<='Z'))
                        s1[i]^=32;
        }
        for(j=0;s2[j];j++)
        {
                if((s2[j]>='A')&&(s2[j]<='Z'))
                        s2[j]^=32;
        }
//      printf("%s\n",s1);
//      printf("%s\n",s2);
        for(i=0;s1[i];i++)
        {
                for(j=0;s2[j];j++)
                {
                        if(s1[i]==s2[j])
                        {
                                s1[i]='*';
                                s2[j]='*';
                                break;
                        }
                }
        }
        for(i=0,k=0;s1[i];i++)
        {
                if((s1[i]!='*')&&(s1[i]!=' '))
                        k++;
        }
        for(j=0;s2[j];j++)
        {
                if((s2[j]!='*')&&(s2[j]!=' '))
                        k++;
        }
        //printf("%s\n",s1);
        //printf("%s\n",s2);

        //printf("%d\n",k);
	for(i=0;i<6;i++)
	{
		s[i]=(flames *)malloc(sizeof(flames));
	}
	printf("Enter game mantra\n");
	for(i=0;i<6;i++)
	{
		scanf(" %c",&s[i]->l);
	}
        s[0]->next=s[1];
        s[1]->next=s[2];
        s[2]->next=s[3];
        s[3]->next=s[4];
        s[4]->next=s[5];
        s[5]->next=s[0];

        /*temp=s[0];
        for(i=0;i<6;i++)
        {
                printf("%c",(temp->l)-32);
                temp=temp->next;
        }
        printf("\n");
	*/
        temp=s[0];
        for(m=0;m<5;m++)
        {
                for(i=0;i<k-2;i++)
                        temp=temp->next;
//              printf("Deleting %c\n",temp->next->l);
                p=temp->next;
                temp->next=temp->next->next;
                temp=temp->next;
                free(p);
        }
        ch=temp->l;
        relate=relation(ch);
//      printf("%c\n",temp->l);
        printf("\n\n\t\t%s\n\n\n",relate);
}
char *relation(char ch)
{
        switch(ch)
        {
                case 'f':
                return "You both are good friends";
                case 'l':
                return "Made for each other";
                case 'a':
                return "You guys affectionated with each other";
                case 'm':
                return "Happily married couples";
                case 'e':
                return "Better to avoid each other";
                case 's':
                return "You both are siblings";
        }
}

