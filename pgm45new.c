#include<stdio.h>
int main()
{
int n,count=0;
printf("entr the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("count is %d",count);
return 0;
}
