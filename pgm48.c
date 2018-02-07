#include<stdio.h>
int main()
{
int a[10],k,i,s=0,average;
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
s=s+a[i];
average=s/k;
}
printf("%d",average);
return 0;
}

	
