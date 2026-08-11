#include <stdio.h>
int main ()
{/*program to subtract 2 numbers*/
  int a,b,c;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);  //input
  c=a-b;  //subtract two numbers
  printf("%d-%d=%d\n",a,b,c);
  return 0;
}
