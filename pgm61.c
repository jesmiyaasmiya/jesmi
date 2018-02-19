#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
char a[25],b[25];
printf("enter the string:\n");
scanf("%s",&a);
printf("to be displayed\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("\n character is %s",b);
return 0;
}


