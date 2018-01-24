#include<stdio.h>
int main()
{
int n,a[100],i,j,b,k;
 printf("enter the number of element in an array:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(k=j+1;k<=n;k++)
{
if(a[j]>=a[k])
{
 b=a[j];
 a[j]=a[k];
 a[k]=b;
}
}
}
printf(" the result is %d\t",b);
}
