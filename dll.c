#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct student
{
	struct student *prv;
	int roll;
	char name[20];
	float marks;
	struct student *next;
}ST;
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
void rev_print(ST *);
int count(ST *);
void rev_link(ST **);
void rev_data(ST *);
void delete(ST **,int);
void delete_all(ST **);
void save(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		//add_begin(&hptr);
		add_end(&hptr);
		//	add_middle(&hptr);
		printf("U want to continue to add node\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	//printf("reverese print\n");
	//rev_print(hptr);

	//printf("Reverse lined data\n");
	//rev_link(&hptr);
	//print(hptr);

	//printf("Reversed data\n");
	//rev_data(hptr);
	//print(hptr);

	/*
	int roll;
	printf("Enter the roll number u want to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
	*/

	//delete_all(&hptr);
	//print(hptr);
	//printf("All nodes got deleted successfully\n");
	
	save(hptr);
	printf("Files saved successfully\n");
}

/*
   void add_begin(ST **ptr)
   {
   ST *temp;
   temp = (ST *)malloc(sizeof(ST));
   printf("Enter the roll, name and marks\n");
   scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
   temp->prv=0;
   temp->next=*ptr;
   if(*ptr!=0)
   (*ptr)->prv=temp;
 *ptr=temp;
 }
 */


void add_end(ST **ptr)
{
	ST *temp;
	temp = (ST *)malloc(sizeof(ST));
	printf("Enter the roll no,name,marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);

	if(*ptr==0)
	{
		temp->prv=0;
		temp->next=0;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->prv=last;
		temp->next=last->next;
		last->next=temp;
	}
}


/*
   void add_middle(ST **ptr)
   {
   ST *temp;
   temp=(ST *)malloc(sizeof(ST));
   printf("enter the roll,name,marks\n");
   scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
   if((*ptr==0)||(temp->roll<(*ptr)->roll))
   {
   temp->prv=0;
   temp->next=*ptr;
   if(*ptr!=0)
   (*ptr)->prv=temp;
 *ptr=temp;
 }
 else
 {
 ST *last=*ptr;
 while((last->next!=0)&&(temp->roll>last->next->roll))
 last=last->next;
 temp->prv=last;
 temp->next=last->next;
 if(last->next!=0)
 last->next->prv=temp;
 last->next=temp;
 }
 }
 */

void print(ST *ptr)
{
	if(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		print(ptr->next);
	}
}

int count(ST *ptr)
{
	int c=0;
	while(ptr !=0)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void rev_print(ST *ptr)
{
	while(ptr->next!=0)
		ptr=ptr->next;
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->prv;
	}
}

void rev_link(ST **ptr)
{
	int i,c=count(*ptr);
	ST **p,*temp;
	p=(ST **)malloc(c*sizeof(ST*));
	temp=*ptr;
	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
		p[i]->next=p[i-1];
	*ptr=p[c-1];

}


/*
   void rev_link(ST **ptr)
   {
   ST *temp;
   while(*ptr!=0)
   {
   temp=(*ptr)->prv;
   (*ptr)->prv=(*ptr)->next;
   (*ptr)->next = temp;
 *ptr=(*ptr)->prv;
 }
 *ptr=temp->prv;
 }
 */

void rev_data(ST *ptr)
{
	int i,j,c=count(ptr);
	ST **p;
	p=(ST **)malloc(c*sizeof(ST*));
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	ST temp;
	int size=sizeof(ST)-8;
	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
}

/*
void delete(ST **ptr, int n)
{
	ST *temp= *ptr,*prv;
	while(temp!=0)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
				*ptr=temp->next;
			if(*ptr!=0)
			{
				(*ptr)->prv=0;
				free(temp);
				temp=NULL;
				return;
			}
			else
			{
				temp->prv->next=temp->next;
				if(temp->next!=0)
					temp->next->prv=temp->prv;
				free(temp);
				temp=NULL;
				return;
			}
		}
		else
			prv=temp;
			temp=temp->next;
	}
}
*/

void delete_all(ST **ptr)
{
ST *temp;
while(*ptr != 0)
{
        temp=*ptr;
        *ptr=(*ptr)->next;
        free(temp);
}
}

void save(ST *ptr)
{
        FILE *fp=fopen("dll.txt","w");
        while(ptr != 0)
        {
                fprintf(fp,"%d%s%f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
}

