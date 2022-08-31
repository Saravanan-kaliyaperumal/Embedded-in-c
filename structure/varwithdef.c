#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float mark;
}s1={10,"aaa",99.5},s2={20,"bbb",65.6};
int main()
{
	printf("s1 Data....\n");
	printf("roll no = %d %d\n",s1.roll,(&s1)->roll);
	printf("name=%s %s\n",s1.name,(&s1)->name);
	printf("mark=%f %f\n",s1.mark,(&s1)->mark);
	printf("s2 Data....\n");
	printf("roll no = %d %d\n",s2.roll,(&s2)->roll);
	printf("name=%s %s\n",s2.name,(&s2)->name);
	printf("mark=%f %f\n",s2.mark,(&s2)->mark);
}
