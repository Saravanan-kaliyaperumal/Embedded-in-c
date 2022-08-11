#include<stdio.h>
void main()
{
char ch;int c=0;
label:
printf("enter the character\n");
scanf(" %c",&ch);
if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
{
ch=ch^32;
printf("After conversion, ch=%c\n",ch);
}
else
{
printf("Not an alphabet\n");
c++;
switch(c)
{
	case 1:
	       goto label;
	case 2:
	       printf("last chance to ");
	       goto label;
	case 3:puts("Failed: 3attempts are over!");
}
}
}
