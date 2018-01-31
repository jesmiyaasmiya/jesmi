#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,n=0,len;
printf("enter string:");
scanf("%s",&a);
for(i=0;i<len;i++)
{
if((a[i]>='0')||(a[i]<='9'))
{
n++;
}
printf("no. of numeric characters is %d",n);
return 0;
}


