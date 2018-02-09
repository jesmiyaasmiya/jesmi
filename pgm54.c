#include<stdio.h>
int main()
{
int a;
printf("enter the number:\n");
scanf("%d",&a);
if(a%2!=0)
printf("nearest even number is %d",a-1);
else
printf("nearest even number is %d",a);
return 0;
}
