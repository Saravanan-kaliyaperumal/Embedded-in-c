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
	char s1[20],s2[20],ch;
	int i,j,m,k;
	flames *head, *a, *b, *c, *d, *e, *temp, *p;
	char* relate; 	
	printf("Enter the first name\n");
	scanf("%[^\n]",s1);
	printf("Enter the second name\n");
	scanf(" %[^\n]",s2);
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
//	printf("%s\n",s1);
//	printf("%s\n",s2);
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
//	printf("%s\n",s1);
//	printf("%s\n",s2);
//	printf("%d\n",k);

	head=(flames*)malloc(sizeof(flames));
	a=(flames*)malloc(sizeof(flames));
	b=(flames*)malloc(sizeof(flames));
	c=(flames*)malloc(sizeof(flames));
	d=(flames*)malloc(sizeof(flames));
	e=(flames*)malloc(sizeof(flames));
	head->l='f';head->next=a;
	a->l='l';a->next=b;
	b->l='a';b->next=c;
	c->l='m';c->next=d;
	d->l='e';d->next=e;
	e->l='s';e->next=head;

	temp=head;
	for(i=0;i<6;i++)
	{
		printf("%c",temp->l-32);
		temp=temp->next;
	}
	printf("\n");
	temp=head;

	for(m=0;m<5;m++)
	{
		for(i=0;i<k-2;i++)
			temp=temp->next;
//		printf("Deleting %c\n",temp->next->l);
		p=temp->next;
		temp->next=temp->next->next;
		temp=temp->next;
		free(p);
	}
	ch=temp->l;
	relate=relation(ch);
//	printf("%c\n",temp->l);
	printf("%s\n",relate);
}
char *relation(char ch)
{
	switch(ch)
	{
		case 'f':
		return "friendship";
		case 'l':
		return "lover";
		case 'a':
		return "Attraction";
		case 'm':
		return "Marriage";
		case 'e':
		return "Enemy";
		case 's':
		return "Siblings";
	}
}
