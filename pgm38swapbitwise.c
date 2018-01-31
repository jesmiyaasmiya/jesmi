#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("before swapping\n:");
	scanf("%d %d",&a,&b);
swap(a,b);
return 0;
}
void swap(int a,int b)
{
int *c,*d,temp;
c=&a;
d=&b;
temp=*c;
*c=*d;
*d=temp;
printf("after swappng:%d %d",*c,*d);
}
