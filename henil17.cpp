#include <stdio.h>
int main()
{ /*calculate the area and perimeter of square */
 float a,b,c;
 printf("enter the length of square:");
 scanf("%f",&a); // enter the length
 b=a*a; // calculate the area
 c=a*4; // calculate the perimeter 
 printf("the area of square is %f\n",b); //output area
 printf("the perimeter of square is %f",c); //output perimeter 
 return 0;
} 