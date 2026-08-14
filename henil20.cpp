#include <stdio.h>
int main()
{ /*calculate the area of triangle */
 float a,b, c;
 printf("enter the length of triangle base:");
 scanf("%f",&a); // input base length 
 printf("enter the height of triangle:");
 scanf("%f",&b); // input height 
 c=a*b/2; // calculate the area
 printf("the area of triangle is %f\n",c); //output area
 return 0;
} 