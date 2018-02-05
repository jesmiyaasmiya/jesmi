#include<stdio.h>
int main()
{
char s[50];
int i,count=0;
gets(s);
while(s[i]!='\0')
{
if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='Z')
{
}
else
count++;
i++;
}
printf("%d",count);
return 0;
}
