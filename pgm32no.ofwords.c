#include<stdio.h>
int main()
{
int i,word,count=0;
char a[1000];
printf("enter sentence:\n");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
word=1+count;
}
}
printf("no. of word: %d",word);
return 0;
}
