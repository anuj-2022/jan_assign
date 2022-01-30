#include<stdio.h>


int mul(int a,int b);
void main()
{
int i=0,j=0,k=5;
printf("multiplacition value is \n");
for(i=0;i<5;i++)
mul(i,k);
}
int mul(int a,int b)
{
printf("%d\t",(a*b));
return 0;
}
