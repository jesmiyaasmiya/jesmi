#include<stdio.h>
int main()
{
    int n,i,a[50];
    printf("array size:");
    scanf("%d",&n);
    printf("enter array numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the number and its position is %d\t%d\n",a[i],i);
    }
    return 0;
}
