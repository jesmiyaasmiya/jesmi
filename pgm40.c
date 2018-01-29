#include<stdio.h>
void main()
{
int n,i,a=0,b=1,nextterm;
printf("entyer the no .of terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",a);
nextterm=a+b;
a=b;
b=nextterm;
}
}
