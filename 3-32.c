#include <stdio.h>

int main()
{
    int count,n=0;

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
            n++;
        }
    }

    printf("there are %d numbers are prime between 1 to 500",n);
    return 0;
}