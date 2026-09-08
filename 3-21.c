#include <stdio.h>

int main()
{
   int a,n;
   printf("enter the natural number:");
   scanf("%d", &a);
   while(a>0)
   {
      n=a%10;
      printf("%d\n", n);
      a=a/10;
   }
    return 0;
}