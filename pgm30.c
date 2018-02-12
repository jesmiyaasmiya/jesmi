#include<stdio.h>
int main()
{
int  f=0,s=1,i,n,n1;
scanf("%d",&n);
printf("%d\t%d\t",f,s);
for(i=2;i<n;i++)
{
n1=f+s;
f=s;
s=n1;

printf("%d\t",n1);
}
return 0;
}
