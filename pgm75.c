#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int l,mid;
printf("Enter the string:\n");
scanf("%s",&a);
l=strlen(a);
mid=l/2;
if(l%2==0)
{
a[mid-1]='*';
a[mid]='*';
printf("%s",a);
}
else
{
a[mid]='*';
printf("%s",a);
}
return 0;
}



