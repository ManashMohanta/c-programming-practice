#include <stdio.h>
int main(){
   int a=4, b=20, c=6, d=2;
   if(a>b && a>c && a>d)
   {
    printf("the largest number is %d\n",a);
   }
   else if(b>a && b>c && b>d)
   {
    printf("the largest number is %d\n",b);
   }
   else if(c>a && c>b && c>d)
   {
    printf("the largest number is %d\n",c);
   }
   else{
    printf("the largest number is %d\n",d);
   }
    return 0;
}