#include<stdio.h>
int  main()
{
int n,i,count=0;
printf("enter a number\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
count++;
}
if(count==0)
{
printf("The given number is prime");
}
else
{
printf("the given number is not a prime");
}
return 0;
}
