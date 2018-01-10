#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter the letter:",ch);
scanf("%c",&ch);
{
if (ch > 65 && ch < 90) || (ch > 92 && ch < 122)
printf("%c is a alphabet",ch);
else
printf("%c is not a alphabet",ch);
return 0;
}
}
