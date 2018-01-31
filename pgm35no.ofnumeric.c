#include<stdio.h>
int main()
{
int i,num=0,len;
char a[100];
printf("enter sentence:\n");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>=0)&&(a[i]<=9))
{
num++;
}
}
printf("no. of numeric:%d",num);
return 0;
}
