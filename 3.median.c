#include<stdio.h>
int main()
{
int i,j,temp,n,a[150];
printf("Enter the number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(j=0;j<n;j++)
{
printf("%d,",a[j]);
}
printf("\nTo find the median:");
n=(n-1)/2;
printf("%d",a[n]);
}
