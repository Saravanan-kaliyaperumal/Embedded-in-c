#include<stdio.h>
void main()
{
char s1,s2;
       do
        {
        printf("Enter the character you want to check:\n");
        scanf(" %c",&s1);
	if((s1>='A')&&(s1<='Z'))
	printf("given Character %c is Upper case\n",s1);
        else if((s1>='a')&&(s1<='z'))
	printf("given character %c is Lower Case\n",s1);
        else if((s1>='0')&&(s1<='9'))
	printf("given character %c is Digit\n",s1);
        else
	printf("Given character %c is Speacial Character\n",s1);
	printf("If you want to try again press ['y' or 'Y']\n");
        scanf(" %c",&s2);
        }
while((s2=='Y')||(s2=='y'));
}

