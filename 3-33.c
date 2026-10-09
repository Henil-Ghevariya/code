#include <stdio.h>

int main()
{
    int n,n2,a;
    printf("enter the natural number:");
    scanf("%d",&n);
    n2=n*n;
    a=n2%10;
    if(a==n)
    {
        printf("the number is automorphic"); 
    }
    else
    {
        printf("the number is not automorphic");
    }
    return 0;
}