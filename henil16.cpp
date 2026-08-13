#include <stdio.h>
int main()
{/* calculate interest */
 float a,b,c,d;
 printf("enter the amound of principal:");
 scanf("%f",&a); //input principal 
 printf("enter the rate of interest:");
 scanf("%f",&b); //input interest 
 printf("enter the number of years:");
 scanf("%f",&c); //input years
 d=a*b*c/100; //calculate interest 
 printf("the annual interest:%f",d); //output interest 
 return 0;
} 