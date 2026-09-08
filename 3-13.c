#include <stdio.h>

int main()
{
    int a,s=0;
    for(a=1;a<=100;a++)
    {
       if(a%13==0)
        {
            s=s+a;
        };

    };
    printf("Sum of all numbers divisible by 13 from 1 to 100 is: %d\n", s);
    return 0;
}