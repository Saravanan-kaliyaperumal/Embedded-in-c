#include<stdio.h>
void main()
{
int a;
char *cp;
short int *sip;
int *ip;
long int *lip;
long long int *llip;
float *fp;
double *dp;
long double *ldp;
printf("sizeof int =%ld\n",sizeof(a));
printf("size:cp=%ld *cp=%ld\n",sizeof cp, sizeof *cp);
printf("size:sip=%ld *sip=%ld\n",sizeof sip, sizeof *sip);
printf("size:ip=%ld *ip=%ld\n",sizeof ip, sizeof *ip);
printf("size:lip=%ld *lip=%ld\n",sizeof lip, sizeof *lip);
printf("size:llip=%ld *llip=%ld\n",sizeof llip, sizeof *llip);
printf("size:fp=%ld *fp=%ld\n",sizeof fp, sizeof *fp);
printf("size:dp=%ld *dp=%ld\n",sizeof dp, sizeof *dp);
printf("size:ldp=%ld *ldp=%ld\n",sizeof ldp, sizeof *ldp);
}

