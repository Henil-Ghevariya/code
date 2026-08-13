#include <stdio.h>
int main()
{/*convert rupees into dollars where 1$=48₹*/
 float a,b;
 printf("enter the amount of rupees:");
 scanf("%f",&a); //input rupees 
 b=a/48; // convert rupees into dollars 
 printf("the amount of dollars:%f",b); //output dollars 
 return 0;
 }