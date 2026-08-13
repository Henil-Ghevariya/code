#include <stdio.h>
int main()
{/*convert dollars into rupees where 1$=48₹*/
 float a,b;
 printf("enter the amount of dollars:");
 scanf("%f",&a); //input dollars 
 b=a*48; // convert dollars into rupees 
 printf("the amount of rupees:%f",b); //output rupees 
 return 0;
 }