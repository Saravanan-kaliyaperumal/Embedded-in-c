#include<stdio.h>
void main()
{
	int i,j;
//	int a[2][3]={{10,20,30},{11,22,33}};
//	int a[2][3]={10,20,30,11,22,33};
//	int a[2][3]={10,20,30,11,22};
	int a[2][3]={{10,20},{11,22}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
