#include <stdio.h>

int main()
{
    int n, a1 = 0, a2 = 0, a;
    printf("enter the natural number:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (a1==0 && a2 == 0)
        {
            a1++;
        }
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        printf("%d ", a);
    }
    return 0;
}