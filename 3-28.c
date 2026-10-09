#include <stdio.h>

int main()
{
    int a,s=0;
    printf("enter the natural number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    };
    s=s/2;
     if(s==a)
        {
            printf("%d is a perfect number",a);
        }
        else
        {
            printf("%d is not a perfect number",a);
        }
    return 0;
}