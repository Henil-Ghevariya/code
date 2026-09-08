#include <stdio.h>

int main()
{
   int a,n=0;
   printf("enter the natural number:");
   scanf("%d",&a);
   while(a>0)
   {
     a=a/10;
     n=n+1;
   };
   printf("number of digits in the given number is: %d", n);
    return 0;
}