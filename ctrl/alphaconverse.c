#include<stdio.h>
void main()
{
char ch;
printf("enter the character\n");
scanf(" %c",&ch);
if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
{
ch=ch^32;
printf("After conversion, ch=%c\n",ch);
}
else
printf("Not an alphabet\n");
}
