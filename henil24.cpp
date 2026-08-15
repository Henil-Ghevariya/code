#include <stdio.h>
int main()
{ /*swap two values*/
 int a,b,c;
 printf("enter the two values:");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("after swap the values a=%d and b=%d",b,c);
 return 0;
}
