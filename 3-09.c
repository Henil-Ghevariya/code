#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
     {
        s=s+i;
     };
        printf("%d\n",s);
    return 0;
}        
