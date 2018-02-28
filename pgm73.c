#include<stdio.h>
int main()
{
	int i,n,a,b,f=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the limits:\n");
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(n>a&&n<b)
		{
		printf("yes,it exists\n");
		f=1;
		break;
		}
	}
	if(f==0)
	printf("it doesn't exists\n");
	return 0;
}
