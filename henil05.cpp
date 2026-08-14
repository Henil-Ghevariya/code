#include <stdio.h>
int main ()
{/*program to calculate 2 numbers*/
  float a,b,c,d,e,f;
  printf("enter two numbers");
  scanf("%f%f",&a,&b);  //input
  c=a+b;  //add two numbers
  d=a-b;  //subtract two numbers
  e=a*b;  //multiplication two numbers 
  f=a/b;  //division two numbers
  printf("%f+%f=%f\n",a,b,c); 
  printf("%f-%f=%f\n",a,b,d);
  printf("%f*%f=%f\n",a,b,e);
  printf("%f/%f=%f\n",a,b,f);
  return 0;
}  
