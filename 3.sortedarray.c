#include<stdio.h>
int main()
{
int i,j, a[90],n,temp;
printf("enter no ");
scanf("%d",&n);
printf("enter array");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=1;i<=n;i++)
printf("%d ",a[i]);
return 0;
}
