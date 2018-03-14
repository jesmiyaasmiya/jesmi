#include <stdio.h>
int main()
{
   char a[20];
   int i;
  printf("Enter the STRING:\n");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)  
   {
       printf("%c",a[i]);
       i++;
   }
   printf(" ");
   for(i=1;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
       i++;
   }
   return 0;
}
