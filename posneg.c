#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("enter the number:",num);
scanf("%d",&num);
if (num > 0)
printf("%d is a positive number",num);
else if(num < 0)
printf("%d is a negative number",num);
else
printf("%d is zero",num);
return 0;
}
