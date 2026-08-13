#include <stdio.h>
int main()
{
  /*convert gram into kg*/
  float a,b;
  printf("enter the amount of gram:");
  scanf("%f",&a); //input the gram
  b=a/1000; //convert gram into kg
  printf("the amount of kg:%f",b); //output kg
  return 0;
}  