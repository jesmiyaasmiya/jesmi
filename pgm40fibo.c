#include<stdio.h>
int main()
{
int first=0,second=1,i,n,next;
printf("enter the number:  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
next=first+second;
first=second;
second=next;
}
printf("the fibonacci result is %d",next);
return 0;
}


