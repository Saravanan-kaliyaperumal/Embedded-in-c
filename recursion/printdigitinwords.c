#include<stdio.h>
void w(int);
void main()
{
        int num;
        printf("enter the number:\n");
        scanf("%d",&num);
        w(num);
	printf("\n");
}
void w(int num)
{
	int d;
        if(num)
        {
                d=num%10;
                num=num/10;
		w(num);
                switch(d)
                {
                        case 0:printf("Zero ");
                               break;
                        case 1:printf("One ");
                               break;
                        case 2:printf("Two ");
                               break;
                        case 3:printf("Three ");
                               break;
                        case 4:printf("Four ");
                               break;
                        case 5:printf("Five ");
                               break;
                        case 6:printf("Six ");
                               break;
                        case 7:printf("Seven ");
                               break;
                        case 8:printf("Eight ");
                               break;
                        case 9:printf("Nine ");
                               break;
                }
}
}
