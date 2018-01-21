#include<stdio.h>
int main()
{
int a,b,n,sum=0;
scanf("%d",&n);
b=n;
while(b>0)
{
a=b%10;
sum=sum*10+a;
b=b/10;
}
if(sum==n)
printf("palindrome number");
else
printf("not a palindrome number");
return 0;
}
