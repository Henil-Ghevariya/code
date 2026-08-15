#include <stdio.h>
int main()
{/*calculate the average of three subject*/
 float a,b,c,d;
 printf("enter the marks of all three subject:");
 scanf("%f %f %f",&a,&b,&c); //input marks
 d=(a*b*c)/3; //calculate the average
 printf("the average of all three subject is %f",d); //
 return 0;
}
