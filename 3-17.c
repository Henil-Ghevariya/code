#include <stdio.h>

int main()
{
    int n,cp=0,cn=0,cz=0;

    for(int i=1;i<=200;i++)
    {
        scanf("%d",&n);

        if(n>0)
        {
            cp++;
        }

        if(n<0)
        {
            cn++;
        }

        if(n=0)
        {
            cz++;
        }
    }

    printf("the number of positive integer is %d",cp);

    printf("the number of zero integer is %d",cz);

    printf("the number of negative integer is %d",cn);

    return 0;
}