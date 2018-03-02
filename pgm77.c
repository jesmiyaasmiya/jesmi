#include <stdio.h>
int main()
{
	int num,i;
	printf("enter the number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if((num%i)==0)
		{
		printf("%d\t",i);
		}
	}
	return 0;
}
