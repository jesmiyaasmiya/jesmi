#include<stdio.h>
int main()
{
char a[50];
int i,count=0;
gets(a);
while(a[i]!='\0')
{
if(a[i]>='a'&&a[i]<='z'||a[i]>='0'&&a[i]<='9'||a[i]>='A'&&a[i]<='Z')
{
}
else
count++;
i++;
}
printf("%d",count);
return 0;
}
