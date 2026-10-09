#include <stdio.h>

int main()
{
    int n,a,a3,b,s=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    a=n;
    do
    {
        b=a%10;
        a3=b*b*b;
        s=s+a3;
        a=a/10;

    } while (a>0);

    if(s==n)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not armstrong number");
    }
    
    return 0;
}