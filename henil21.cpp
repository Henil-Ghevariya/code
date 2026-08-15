#include <stdio.h>
int main()
{ /*calculte net salary*/
  float a,b;
  printf("enter the gross salary:");
  scanf("%f",&a);                    //input gross salary
  b=a+a*10/100-a*3/100;              //calculate net salary
  printf("the net salary is %f",b);  //output net salary
  return 0;
}
