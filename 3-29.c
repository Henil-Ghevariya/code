#include <stdio.h>

int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    for(int i=2;i,n;i++)
    {
        if(n%i==0)
        {
            break;
        };
    };
    printf("%d is not prime number",n);
    return 0;
}