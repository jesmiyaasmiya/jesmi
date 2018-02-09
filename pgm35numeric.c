#include<stdio.h>
#include<string.h>
int main()
{
char j[100];
int i,n=0,len;
printf("enter string:");
scanf("%s",&j);
  len=strlen(j);
for(i=0;i<len;i++)
{
if(j[i]=='1'||j[i]=='2'||j[i]=='3'||j[i]=='4'||j[i]=='5'||j[i]=='6'||j[i]=='7'||j[i]=='8'||j[i]=='9'||j[i]=='0')
{
n++;
}
}
printf("no. of numeric characters is %d",n);
return 0;
}


