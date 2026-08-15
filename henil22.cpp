#include <stdio.h>
int main ()
{ /*calculate the net sales*/
  float a,b;
  printf("enter the gross sales:");
  scanf("%f",&a);
  b=a-a*10/100;
  printf("the net sales is %f",b);
  return 0;
}
