#include <stdio.h>
int main()
{
char s1[20],s2[50];
int i;
printf("\nEnter two strings");
scanf("%s%s",s1,s2);
i=0;
while (s1[i] == s2[i] && s1[i] != '\0')
i++;
if (s1[i]>s2[i])
printf("%s ",s1);
else if(s1[i]<s2[i])
{
printf("%s",s2);
}
else
{
printf("string is %s",s1);
}
return 0;
}
