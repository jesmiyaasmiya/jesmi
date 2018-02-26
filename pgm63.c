#include<stdio.h>
#include<string.h>
int main()
{
	char a[25];
	int i,count=1;
  printf("enter a string\n");
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
		count++;
		}
	}
	printf("no of words is %d",count);
	return 0;
}
