#include <stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,n;
	printf("\nEnter character");
	scanf("%s",&a);
	printf("\nto be displayed");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\ncharacter is %s ",b);
	return 0;
}
