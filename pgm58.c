#include<stdio.h>
int main()
{
int f,g;
printf("Before swapping the numbers are");
scanf("%d%d",&f,&g);
f=f^g;
g=f^g;
f=f^g;
printf("\n After swapping numbers are  %d %d",f,g);
return 0;
}
