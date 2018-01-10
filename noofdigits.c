#include<stdio.h>
int main()
{
int n, count=0;
printf("%d",n);
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digits:%d",count);
return 0;
}
