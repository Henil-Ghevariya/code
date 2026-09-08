#include <stdio.h>

int main()
{
    int n,i,s=0,m;
    printf("enter the natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        s=s+i;
     };
        m=s/10;
        printf("%d\n",s);
        printf("%d\n",m);
    return 0;
}        