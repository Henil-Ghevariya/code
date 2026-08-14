#include <stdio.h>
int main()
{ /*calculate the area and perimeter of rectangle */
 float a,b,c,d;
 printf("enter the length of rectangle:");
 scanf("%f",&a); // enter the length
 printf("enter the width of rectangle:");
 scanf("%f",&b); // enter the width 
 c=a*b; // calculate the area
 d=(a+b)*2; // calculate the perimeter 
 printf("the area of rectangle is %f\n",c); //output area
 printf("the perimeter of rectangle is %f",d); //output perimeter 
 return 0;
} 