#include<stdio.h>
int main()
{
    int i,j,a[500],n,t;
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
        printf("lowest number is %d\n",a[0]);
        printf("highest number is %d\n",a[n]);
       return 0;
}
