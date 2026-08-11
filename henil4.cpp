#include <stdio.h>
float main ()
{/*program to divide 2 numbers*/
  float a,b,c;
  printf("enter two numbers");
  scanf("%f%f",&a,&b);  //input
  c=a/b;  //divide two numbers
  printf("%f/%f=%f\n",a,b,c);
  return 0;
}
