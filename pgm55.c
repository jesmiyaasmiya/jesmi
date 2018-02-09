#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two numbers:\n");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("product is even");
}
else
printf("product is odd");
return 0;
}
