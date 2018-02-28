#include<stdio.h>
#include<math.h>
int main()
{
int n,i,res,f=0;
printf("\nEnter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if((pow(2,i))==n)
{
	res=n*2;
  printf("nearest greater power of 2 is %d\n",res);
  f=1;
  break;
}
}
if(f==0)
printf("The given number not satisfied this question\n");
return 0;
}


