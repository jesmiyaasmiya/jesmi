#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        if(n%i==0)
        {
        f=1;
        break;
        }
        }
        if(f==0)
        printf("the given number is not composite\n");
        else
        printf("the given number is composite"\n);
        return 0;
        }
      
