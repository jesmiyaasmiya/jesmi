#include<stdio.h>
#include<string.h>
int main()
{
	char j[10];
	int i,m,count=0;
	scanf("%s",j);
	m=strlen(j);
	for(i=0;i<m;i++)
	{
	if(j[i]=='1'||j[i]=='2'||j[i]=='3'||j[i]=='4'||j[i]=='5'||j[i]=='6'||j[i]=='7'||j[i]=='8'||j[i]=='9'||j[i]=='0')
{
	count++;
}
}
	if(count==0)
	{
	printf(" not a numeric number");
	}
	else
	printf(" numeric number");
  return 0;
	}
