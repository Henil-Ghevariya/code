#include <stdio.h>
int main()
{ /* convert bytes in KB,MB and GB*/
 int a,b,c,d;
 printf("enterthe number of bytes:");
 scanf("%d",&a); // input bytes
 b=a*1024; //convert bytes into KB
 c=b*1024; //convert KB into MB
 d=c*1024; //convert MB into GB
 printf("%d bytes=%d KB\n",a,b);
 printf("%d bytes=%d MB\n",a,c);
 printf("%d bytes=%d GB\n",a,d);
 return 0;
} 