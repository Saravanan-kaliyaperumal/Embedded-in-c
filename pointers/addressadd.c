#include<stdio.h>
void main()
{
char *cp = (char *)0x1000;
short int *sip = (short int *)0x1000;
int *ip = (int *)0x1000;
long int *lip = (long int *)0x1000;
float *fp = (float *)0x1000;
printf("cp=%p, cp+1=%p\n",cp,cp+1);
printf("sip=%p, sip+1=%p\n",sip,sip+1);
printf("ip=%p, ip+1=%p\n",ip,ip+1);
printf("lip=%p, lip+1=%p\n",lip,lip+1);
printf("fp=%p, fp+1=%p\n",fp,fp+1);
}

