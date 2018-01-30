#include<stdio.h>
int main()
{
int i,b,ch,count=0;
char a[1000];
printf("enter sentence:\n");
scanf("%[^\n]s",&a);
b=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
ch=b-count;
}
}
printf("no. of letters without count space: %d",ch);
return 0;
}
