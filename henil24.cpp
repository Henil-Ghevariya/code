#include <stdio.h>
int main()
{ /*swap two values*/
 int a,b,c;
 printf("enter the two values a and b:");
 scanf("%d %d",&a,&b); //input a and b
 c=a; //value of 'a' goes in 'c' and 'a' become empty
 a=b; //value of 'b' goes in 'a' and 'b' become empty
 b=c; //value of 'c' goes in 'b' and 'c' become empty
 printf("after swap the values a=%d and b=%d",a,b); //output
 return 0;
}
