#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct student
{
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
		add_begin(&hptr);
	//	add_end(&hptr);
	//	add_middle(&hptr);
		printf("U want to continue to enter node(y/Y)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));

	print(hptr);

	//printf("After rev_print\n");
	//rev_print(hptr);

	//printf("After reversing the links\n");
	//rev_link(&hptr);
	//print(hptr);
	
	//printf("After reversing the data\n");
	//rev_data(hptr);
	//print(hptr);
	
	/*
	int roll;
	printf("Enter the roll no to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
	*/

	//delete_all(&hptr);
	///printf("Data's are successfully deleted\n");
	//print(hptr);
	
	save(hptr);
	printf("Data saved successfully in file\n");

}


void add_begin(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter roll no, name and marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	temp->next=*ptr;
	*ptr=temp;
}


/*
void add_end(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter roll no, name & marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last = *ptr;
		while(last->next!=0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
}
*/

/*
void add_middle(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("enter the roll, name & marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	if((*ptr == 0)||(temp->roll<(*ptr)->roll))
	{
		temp->next = *ptr;
		*ptr= temp;
	}
	else
	{
		ST *last = *ptr;
		while((last->next!=0)&&(temp->roll>last->next->roll))
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
}
*/

void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
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

/*
void rev_print(ST *ptr)   //Using recursion
{
	if(ptr != 0)
	{
		rev_print(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}
*/


/*
void rev_print(ST *ptr)  //Using loops
{
int i,j,c=count(ptr);
ST *temp=ptr;
for(i=0;i<c;i++)
{
	ptr=temp;
	for(j=0;j<c-1-i;j++)
		ptr=ptr->next;
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
}
}

*/

/*
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
*/

/*
void rev_data(ST *ptr)
{
	ST *p1,*p2;
	ST temp;
	int i,j,c=count(ptr);
	int size = sizeof(ST) - sizeof(ST*);
	p1=ptr;
	for(i=0;i<c/2;i++)
	{
		p2=ptr;
		for(j=0;j<c-1-i;j++)
			p2=p2->next;
		memcpy(&temp,p1,size);
		memcpy(p1,p2,size);
		memcpy(p2,&temp,size);
		p1=p1->next;
	}
}
*/

/*
void delete(ST **ptr,int n)
{
	if(*ptr == 0)
	{
		printf("Empty linked list, nothing to print\n");
		return;
	}

	ST *temp=*ptr, *prv;
	while(temp != 0)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
				*ptr =temp->next;
			else
				prv->next=temp->next;
			free(temp);
			temp=NULL;
			return;
		}
		else
		{
		prv=temp;
		temp=temp->next;
		}
	}
	printf("the data doesn't exist\n");
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
	FILE *fp=fopen("sll.txt","w");
	while(ptr != 0)
	{
		fprintf(fp,"%d%s%f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

