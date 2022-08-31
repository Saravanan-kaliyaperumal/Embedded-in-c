#include<stdio.h>
int main()
{
        struct st
        {
                int x;
                char ch;
                float f;
        };
        struct st v;
	struct st *p=&v;
        printf("enter the structure data 1.int 2.char 3.float\n");
        scanf("%d %c %f",&p->x,&p->ch,&p->f);
        printf("x=%d,ch=%c,f=%f\n",p->x,p->ch,p->f);
        scanf("%d %c %f",&(*p).x,&(*p).ch,&(*p).f);
        printf("x=%d,ch=%c,f=%f\n",(*p).x,(*p).ch,(*p).f);
}


