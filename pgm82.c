#include <stdio.h>
int main()
{
	float a,b,c;
	printf("enter the length of the farm:\n");
	scanf("%f",&a);
	printf("enter the breadth of the farm:\n");
	scanf("%f",&b);
	c=a*b;
	printf("the area of the rectangular farm is %.5f",c);
  return 0;
}
