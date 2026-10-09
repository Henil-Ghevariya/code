#include <stdio.h>

int main()
{
    int count,sum=0;

    for (int i = 2; i <= 500; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            sum=sum+i;
        }
    }

    printf("the summation of prime of numbers 1 to 500 is %d",sum);

    return 0;
}