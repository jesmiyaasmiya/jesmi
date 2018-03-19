#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("\n enter the number");
	scanf("%d %d",&a,&b);
	e=a/b;
	printf("\n enter te number");
	scanf("%d %d",&c,&d);
	f=c%d;
	printf("the division is %d",e);
	printf("the modulo is %d",f);
	return 0;
}
