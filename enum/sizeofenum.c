#include<stdio.h>
enum e{SUN,MON,TUE,WED,THU,FRI,SAT};
int main()
{
	enum e day;
	printf("size: %ld\n",sizeof(enum e));
	printf("size: %ld\n",sizeof(day));
	printf("size: %ld\n",sizeof(SUN));
	printf("enter enumerator number:\n");
	scanf("%d",(int *)&day);
	if(day == SUN)
		printf("Holiday\n");
	else if(day == SAT)
		printf("Half working day\n");
	else
		printf("working day\n");
}

