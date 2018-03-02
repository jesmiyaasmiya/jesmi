# include<stdio.h>
int main()
{
    int a,b,c,i,f=0;
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=1;i<=c;i++)
    {
       if(c==i*i)
       {
        printf("yes,It is a perfect square");
        f=1;
        break;
       	
       }
    }
    if(f==0)
    {
    	printf("It is not a perfect square");
    }
    return 0;
}
