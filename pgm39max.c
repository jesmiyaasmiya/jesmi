#include<stdio.h>
int main()
{
	int i,j,temp,a[50],max;
	printf("enter array element:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	{
	max=a[0];
	}
		printf("max among 10 elements is %d",max);
	return 0;
}
	
		
	

