#include<stdio.h>
#pragma pack(2)
struct st
{
        int x;
        int ch;
        float f;
};
int main()
{
        printf("size=%ld\n",sizeof(struct st));
}
