#include<stdio.h>
int main()
{0
int a,d,n,i,totalnum;
int sum=0;
printf("enter the starting number:");
scanf("%d",&a);
printf("\nenter the difference of each number:");
scanf("%d",&d);
printf("\nenter the total number of terms:");
scanf("%d",&n);
sum=n*(2*(a+(n-1)*d))/2;
totalnum=a+(n-1)*d;
printf("\n the A.P is:");
for(i=a;i<=totalnum;i=i+d)
{
if(i!=totalnum)
{
printf("%d +",i);}
else
{
printf("%d=%d",i,sum);
}
}
return 0;
}
