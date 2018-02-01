#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2;
    char a[50],b[50];
    printf("string 1\n");
    scanf("%s",&a);
     printf("string 2\n");
    scanf("%s",&b);
   n1=strlen(a);
   n2=strlen(b);
    if(n1=n2)
    {
    printf("%s\n",a);
    }
    else if(n1>n2)
    {
    printf("%s\n",a);
    }
    else
    {
    printf("%s\n",b[50]);
    }
  
        return 0;
}
