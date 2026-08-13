#include <stdio.h>
int main()
{/*convert dollars into rupees where 1$=48₹*/
 int a,b;
 printf("enter the amount of dollars:");
 scanf("%d",&a); //input dollars 
 b=a*48; // convert dollars into rupees 
 printf("the amount of rupees:%d",b); //output rupees 
 return 0;
 }