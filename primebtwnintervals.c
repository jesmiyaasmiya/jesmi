#include<stdio.h>
int main()
{
int i,f=10,l=20;
printf("enter the first interval");
scanf("%d",&l);
printf("enter the second interval");
scanf("%d",&f);
for(i=f,i<=l,i++)
{
if(i%2==1)
{
printf("%d is an odd number");
}
}
return 0;
}
