#include<stdio.h>
int main()
{
int i,flag=0,n,int1,int2;
scanf("%d%d%d",&n,&int1,&int2);
for(i=int1;i<int2;i++)
{
flag=1;
break;
}
if(flag==0)
printf("%d is prime number",n);
else
printf("%d is not prime number",n);
return 0;
}
