#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values:\n");
scanf("%d %d",&a,&b);
c=a-b;
if(c%2==0)
{
printf(" The result is EVEN");
}
else
{
printf(" The result is ODD");
}
}
