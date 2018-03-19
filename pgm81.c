#include <stdio.h>

int main()
{
int i,n,a,b,d;
printf("enter the no of lines:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d%d",&a,&b);
    d=b-a;
    printf("%d\n",d);
	
}
    return 0;
}
