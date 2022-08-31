#include<stdio.h>
void main()
{
	char *cp=0;
	int *ip=0;
	float *fp=0;
	long long int *llp=0;
	printf("cp=%p, cp+1=%p\n",cp,cp+1);
	printf("ip=%p, ip+1=%p\n",ip,ip+1);
	printf("fp=%p, fp+1=%p\n",fp,fp+1);
	printf("llp=%p, llp+1=%p\n",llp,llp+1);
}
