#include<stdio.h>
typedef struct st
{
	int roll;
	char name[20];
	float mark;
}ST;
void setdata(ST *);
void print(ST *);
int main()
{
	int i;
	ST s[3];
	setdata(s);
	print(s);
}
void setdata(ST *p)
{
	int i;
	printf("enter the 3 students records\n");
	for(i=0;i<3;i++)
		scanf("%d %s %f",&p[i].roll,p[i].name,&p[i].mark);
}
void print(ST *p)
{
        int i;
        for(i=0;i<3;i++)
	{
                printf("%d %s %f",p[i].roll,p[i].name,p[i].mark);
		printf("\n");
	}
	printf("\n");
}



