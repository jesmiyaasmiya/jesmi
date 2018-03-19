#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
int c;
printf("enter the string\n");
scanf("%s",&a);
strcpy(b,a);
strrev(b);
c=strcmp(a,b);
if(c==0)
{
printf("given string is palindrome");
}
else
{
printf("given string is not a palindrome");
}
return 0;
}
