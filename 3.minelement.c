#include<stdio.h>
int main()
{
	int a[25],i,n,min;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		min=a[0];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("minimum element is %d",min);
	return 0;
}
	
	
