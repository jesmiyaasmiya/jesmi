#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers:\n");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap numbers are:%d %d",a,b);
return 0;
}
