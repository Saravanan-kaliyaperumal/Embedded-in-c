#include<stdio.h>
void main()
{
	int i,num,age=1,earning=0,m=0,n=0;
V:
	printf("Enter no of wine botles:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Invalid number:\n");
		goto V;
	}
	int v[num];
	int temp[num];
	printf("enter the value of wine bottles:\n");
	for(i=0;i<num;i++)
		scanf("%d",&v[i]);
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf(" %d > %d ? ",v[i-m],v[num-1-n]);
		if((v[i-m])>(v[num-n-1]))
		{
			temp[i]=v[num-1-n];
			n++;
			m++;
		}
		else
			temp[i]=v[i-m];
		printf("%d",temp[i]);
		printf("\n");
	}
	printf("\nNo of wine bottles = %d\n",num);
	printf("Value of wine bottles:\n");
	for(i=0;i<num;i++)
		printf("%d ",temp[i]);
	printf("\n");
	for(i=0;i<num;i++)
	{
		earning=earning+temp[i]*age;
		age++;
	}
	printf("Max earning she can get = %d\n",earning);
}
