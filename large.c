#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three numbers:",a,b,c);
scanf("%d%d%d",&a,&b,&c);
{
if ( (a > b) ||  (a > c) )
printf("%d is larger",a);
else if (b > c)
printf("%d is larger",b);
else
printf("%d is larger",c);
}
}
