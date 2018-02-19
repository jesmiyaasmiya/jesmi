#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,c=0,c1=0;
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
c=c+1;
}
else if(s[i]>=0||s[i]<=9)
{
c1=c1+1;
}
}
if(c!=0&&c1!=0)
{
printf("\n Yes,The String contains both alphabet and number");
}
else
{
printf("no");
}
return 0;
}
