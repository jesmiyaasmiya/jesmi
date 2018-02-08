#include<stdio.h>
int main()
{
    int n,a[50],i,j,maxi=0,mini=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxi=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
        mini=a[0];
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    printf("maximum number is %d",maxi);
    printf("minimum number is %d",mini);
    return 0;
}
