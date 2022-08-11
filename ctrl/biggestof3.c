#include<stdio.h>
void main()
{
int x,y,z;
printf("enter the 3 values:\n");
scanf("%d%d%d",&x,&y,&z);
if((x<y)&&(z<y))
printf("y is greater\n");
else if((y<x)&&(z<x))
printf("x is greater\n");
else if((x<z)&&(y<z))
printf("z is greater\n");
else if((x==y)&&(z<x))
printf("x is equal to y and greater than z\n");
else if((y==z)&&(x<z))
printf("y is equal to z and graeter than x\n");
else if((z==x)&&(y<x))
printf("z is equal to x and greater than y\n");
else
printf("x,y,z are equal\n");
}

