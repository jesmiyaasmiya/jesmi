#include <stdio.h>
int main() 
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("it is a multiple of 7");
	}
	else
	{
		printf("not a multiple of 7");
	}
	return 0;
}
