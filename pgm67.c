#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    while(a%10!=0)
    {
    a++;
    }
    printf("The nearest greater multiples of 10 is %d",a);
    return 0;
}
