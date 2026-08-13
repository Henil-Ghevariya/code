#include <stdio.h>
int main()
{/*convert dollars into pound where 1$=48₹ and 1 pound=70 RS.*/
 float a,b,c;
 printf("enter the amount of dollars:");
 scanf("%f",&a); //input dollars 
 b=a*48; // convert dollars into rupees 
 c=b/70; //convert rupees into pound
 printf("the amount of pound:%f",c); //output pound
 return 0;
 }