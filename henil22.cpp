#include <stdio.h>
int main ()
{ /*calculate the net sales*/
  float a,b;
  printf("enter the gross sales:");
  scanf("%f",&a); //input gross sales
  b=a-a*10/100; //calculate net sales
  printf("the net sales is %f",b); //output net sales
  return 0;
}
