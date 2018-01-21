#include<stdio.h>
int main()
{
int n=3,a=1,d=1,sum=0,i,y=0;
for(i=a;i<=n;i=i+d)
{
/*	if(y==0)
{ 
a=sum;
y=1;
}
else*/
sum=sum+i;
} 
printf("the result is %d\n",sum);
return 0;
}

