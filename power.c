#include<stdio.h>
void main()
{
int num,power,result=1;
printf("enter the number:");
scanf("%d%d",&num,&power);
while(power!=0)
{
result=result*num;
--power;
}
printf("%d",result);
}
