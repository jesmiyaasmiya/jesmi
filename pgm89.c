#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,j,temp;
    printf("Enter the string:\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("%s",s);
return 0;    
}
