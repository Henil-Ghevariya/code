#include <stdio.h>
int main()
{ /* convert celcius into Fahrenheit */
 float a,b;
 printf("enter the amount of celcius:");
 scanf("%f",&a); //input celcius
 b=9.0/5*a+32 ; //calculate the Fahrenheit
 printf("the amount of fahrenheit is:%f",b); // output fahrenheit
 return 0;
} 