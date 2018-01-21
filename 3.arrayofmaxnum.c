#include<stdio.h>
int main()
{
int num,a[25],i,max;
scanf("%d",&num);
for(i=0;i<=num;i++)
{
scanf("%d",&max);
}
max=a[0];
for(i=1;1<=num;i++)
if(max<a[i])
{
max=a[i];
}
printf("maximum element is %d",max);
return 0;
}
