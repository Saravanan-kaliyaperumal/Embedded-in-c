#include<stdio.h>
void main()
{
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int *p[3]={a[0],a[1],a[2]};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
//	int *p[3]={(int*)a,(int*)a+1,(int*)a+2};
//	int **dp=p;
	//int **dp=a;
//	printf("%d\n",**dp);
}
