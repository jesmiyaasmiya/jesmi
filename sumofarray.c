#include<stdio.h>
int main()
{
int n,k,a[25],sum=0;
printf("enter the numbers:");
scanf("%d\t%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("sum is %d",sum);
return 0;
}
