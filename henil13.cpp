#include <stdio.h>
int main()
{ /* convert bytes in KB,MB and GB*/
 float a,b,c,d;
 printf("enterthe number of bytes:");
 scanf("%f",&a); // input bytes
 b=a/1024; //convert bytes into KB
 c=b/1024; //convert KB into MB
 d=c/1024; //convert MB into GB
 printf("%f bytes=%f KB\n",a,b);
 printf("%f bytes=%f MB\n",a,c);
 printf("%f bytes=%f GB\n",a,d);
 return 0;
} 
