#include <stdio.h>
int main()
{
int n,r,sum=0,re;
printf("Enter a number:\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
while(sum!=0)
{
re=sum%10;
printf("%d\t",re);
sum=sum/10;
}
return 0;
}
