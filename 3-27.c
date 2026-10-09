#include <stdio.h>

int main()
{
    int a;
    printf("enter the natural number:");
    scanf("%d",&a);
    printf("the factor of %d is ",a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    };
    return 0;
}