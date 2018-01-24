#include<stdio.h>
int main()
{
int hr,min,m;
scanf("%d",&m);
hr=m/60;
min=m%60;
printf("hr and min are %d\t%d",hr,min);
return 0;
}
