#include<stdio.h>
void main()
{
int num,msb_pos;
printf("enter the number u want to check\n");
scanf("%d",&num);
msb_pos=8*sizeof(num)-1;
//num&(1<<31)?puts("-ve"):puts("+ve");
num&(1<<msb_pos)?puts("-ve"):puts("+ve");
}
