#include<stdio.h>
void main()
{
int year;
printf("Enter the year:%d",year);
scanf("%d",&year);
if (year % 4==0)
printf("%d is a leap year");
else
printf("%d is not a leap year");
}
