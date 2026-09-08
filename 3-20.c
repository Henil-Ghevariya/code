#include <stdio.h>

int main()
{
    int i,s=0;
    for(i=1;i<=100;i++)
    {
        if (i%3==0)
        {
            s=s+i;
        };
    };
    printf("Sum of numbers divisible by 3 between 1 and 100: %d\n", s);
    return 0;
}