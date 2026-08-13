#include <stdio.h>
int main()
{ /* convert Fahrenheit into celcius */
 float a,b;
 printf("enter the amount of fahrenheit:");
 scanf("%f",&a); //input fahrenheit 
 b=5*(a-32)/9 ; //calculate the celcius 
 printf("the amount of celcius is:%f",b); // output celcius 
 return 0;
} 