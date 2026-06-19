#include <stdio.h>
int main(){
    int a=6;
    printf("%d%d%d\n",a,++a,a++);
 //   if evaluation order is left to right, then the output will be  6 7 7
 //   if evaluation order is right to left, then the output will be  7 7 6
    return 0;
}