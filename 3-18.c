#include <stdio.h>

int main()
{
    int n,b=0,g=0;

    printf("enter the gender\nfor boy=1\nfor girl=2\n");
    for ( int i = 0; i < 50; i++)
    {
        scanf("%d",&n);

        if(n==1)
        {
            b++;
        }

        if(n==2)
        {
            g++;
        }

    }

    printf("the number of boys is %d\n",b);
    
    printf("the number of girls is %d\n",g);
    
    return 0;
}