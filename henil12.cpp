#include <stdio.h>
int main()
{
  /*convert kg into gram*/
  float a,b;
  printf("enter the amount of kg:");
  scanf("%f",&a); //input the kg
  b=a*1000; //convert kg into gram
  printf("the amount of gram:%f",b); //output gram
  return 0;
}  