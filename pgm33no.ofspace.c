#include<stdio.h>
int main()
{
int i,count=0;
char a[100];
printf("enter sentence:\n");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
}
}
printf("no. of space: %d",count);
return 0;
}
