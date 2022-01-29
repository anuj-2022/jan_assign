#include<stdio.h>
int add(int a,int b);
void main()
{
int i,j;
add(5,8);
}

int add(int a,int b)
{
int c=0;
c=a+b;
printf("The value is %d\n",c);
return 0;
}

