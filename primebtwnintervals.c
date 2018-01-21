#include <stdio.h>
int main()
{
int a, d, i, g;
scanf("%d %d",&a,&d);
printf("prime numbers are:\n");
while (a<d)
{
g=0;
for(i=2;i<=a/2;++i)
{
if(a%i == 0)
{
g= 1;
}
}
if (g==0)
printf("%d\n",a);
++a;
}
return 0;
}
