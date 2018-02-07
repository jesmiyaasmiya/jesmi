#include <stdio.h>
#include<math.h>
int main()
{
int n,i;
printf("\nEnter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if((pow(2,i))==n)
{
printf("yes");
}
}
printf("no");
return 0;
}
